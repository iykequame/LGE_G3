/*
 * Copyright (C) 2002 Pavel Machek <pavel@ucw.cz>
 * Copyright (C) 2002-2005 by David Brownell
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

//                                                   
//                                            

#include <linux/module.h>
#include <linux/init.h>
#include <linux/netdevice.h>
#include <linux/ethtool.h>
#include <linux/workqueue.h>
#include <linux/mii.h>
#include <linux/crc32.h>
#include <linux/usb.h>
#include <linux/usb/cdc.h>
#include <linux/usb/usbnet.h>


/*
                                                                    
                                                                       
                                                                    
                                                                   
  
                                                                   
  
                                                                   
                                                                     
                                                                       
                                                               
  
                                                                  
                                           
                                                                        
                                                                  
                                                           
  
                                                                         
                                                     
 */

static struct sk_buff *
zaurus_tx_fixup(struct usbnet *dev, struct sk_buff *skb, gfp_t flags)
{
	int			padlen;
	struct sk_buff		*skb2;

	padlen = 2;
	if (!skb_cloned(skb)) {
		int	tailroom = skb_tailroom(skb);
		if ((padlen + 4) <= tailroom)
			goto done;
	}
	skb2 = skb_copy_expand(skb, 0, 4 + padlen, flags);
	dev_kfree_skb_any(skb);
	skb = skb2;
	if (skb) {
		u32		fcs;
done:
		fcs = crc32_le(~0, skb->data, skb->len);
		fcs = ~fcs;

		*skb_put (skb, 1) = fcs       & 0xff;
		*skb_put (skb, 1) = (fcs>> 8) & 0xff;
		*skb_put (skb, 1) = (fcs>>16) & 0xff;
		*skb_put (skb, 1) = (fcs>>24) & 0xff;
	}
	return skb;
}

static int zaurus_bind(struct usbnet *dev, struct usb_interface *intf)
{
	/*                                                   
                                                         
  */
	dev->net->hard_header_len += 6;
	dev->rx_urb_size = dev->net->hard_header_len + dev->net->mtu;
	return usbnet_generic_cdc_bind(dev, intf);
}

/*                                                   */
static int always_connected (struct usbnet *dev)
{
	return 0;
}

static const struct driver_info	zaurus_sl5x00_info = {
	.description =	"Sharp Zaurus SL-5x00",
	.flags =	FLAG_POINTTOPOINT | FLAG_FRAMING_Z,
	.check_connect = always_connected,
	.bind =		zaurus_bind,
	.unbind =	usbnet_cdc_unbind,
	.tx_fixup =	zaurus_tx_fixup,
};
#define	ZAURUS_STRONGARM_INFO	((unsigned long)&zaurus_sl5x00_info)

static const struct driver_info	zaurus_pxa_info = {
	.description =	"Sharp Zaurus, PXA-2xx based",
	.flags =	FLAG_POINTTOPOINT | FLAG_FRAMING_Z,
	.check_connect = always_connected,
	.bind =		zaurus_bind,
	.unbind =	usbnet_cdc_unbind,
	.tx_fixup =	zaurus_tx_fixup,
};
#define	ZAURUS_PXA_INFO		((unsigned long)&zaurus_pxa_info)

static const struct driver_info	olympus_mxl_info = {
	.description =	"Olympus R1000",
	.flags =	FLAG_POINTTOPOINT | FLAG_FRAMING_Z,
	.check_connect = always_connected,
	.bind =		zaurus_bind,
	.unbind =	usbnet_cdc_unbind,
	.tx_fixup =	zaurus_tx_fixup,
};
#define	OLYMPUS_MXL_INFO	((unsigned long)&olympus_mxl_info)


/*                                                                       
                                                                      
                                                                         
                                                                       
                                                                         
                                         
 */
static const u8 safe_guid[16] = {
	0x5d, 0x34, 0xcf, 0x66, 0x11, 0x18, 0x11, 0xd6,
	0xa2, 0x1a, 0x00, 0x01, 0x02, 0xca, 0x9a, 0x7f,
};
static const u8 blan_guid[16] = {
	0x74, 0xf0, 0x3d, 0xbd, 0x1e, 0xc1, 0x44, 0x70,
	0xa3, 0x67, 0x71, 0x34, 0xc9, 0xf5, 0x54, 0x37,
};

static int blan_mdlm_bind(struct usbnet *dev, struct usb_interface *intf)
{
	u8				*buf = intf->cur_altsetting->extra;
	int				len = intf->cur_altsetting->extralen;
	struct usb_cdc_mdlm_desc	*desc = NULL;
	struct usb_cdc_mdlm_detail_desc	*detail = NULL;

	while (len > 3) {
		if (buf [1] != USB_DT_CS_INTERFACE)
			goto next_desc;

		/*                                                      
                                   
   */
		switch (buf [2]) {
		case USB_CDC_MDLM_TYPE:
			if (desc) {
				dev_dbg(&intf->dev, "extra MDLM\n");
				goto bad_desc;
			}
			desc = (void *) buf;
			if (desc->bLength != sizeof *desc) {
				dev_dbg(&intf->dev, "MDLM len %u\n",
					desc->bLength);
				goto bad_desc;
			}
			/*                               */
			if (memcmp(&desc->bGUID, blan_guid, 16) &&
			    memcmp(&desc->bGUID, safe_guid, 16)) {
				/*                                       */
				dev_dbg(&intf->dev, "MDLM guid\n");
				goto bad_desc;
			}
			break;
		case USB_CDC_MDLM_DETAIL_TYPE:
			if (detail) {
				dev_dbg(&intf->dev, "extra MDLM detail\n");
				goto bad_desc;
			}
			detail = (void *) buf;
			switch (detail->bGuidDescriptorType) {
			case 0:			/*        */
				if (detail->bLength != (sizeof *detail + 2))
					goto bad_detail;
				break;
			case 1:			/*        */
				if (detail->bLength != (sizeof *detail + 3))
					goto bad_detail;
				break;
			default:
				goto bad_detail;
			}

			/*                                                 
                                                   
                                       
                                             
                                                  
               
                                         
                                                      
                                                  
                                                       
                                                     
                                                    
    */
			if ((detail->bDetailData[1] & ~0x02) != 0x01) {
				/*                                           
                                                 
     */
bad_detail:
				dev_dbg(&intf->dev,
						"bad MDLM detail, %d %d %d\n",
						detail->bLength,
						detail->bDetailData[0],
						detail->bDetailData[2]);
				goto bad_desc;
			}

			/*                                         */
			dev->net->hard_header_len += 6;
			dev->rx_urb_size = dev->net->hard_header_len
					+ dev->net->mtu;
			break;
		}
next_desc:
		len -= buf [0];	/*         */
		buf += buf [0];
	}

	if (!desc || !detail) {
		dev_dbg(&intf->dev, "missing cdc mdlm %s%sdescriptor\n",
			desc ? "" : "func ",
			detail ? "" : "detail ");
		goto bad_desc;
	}

	/*                                                               
                                                                  
                                                                    
                                   
  */
	return usbnet_get_endpoints(dev, intf);

bad_desc:
	dev_info(&dev->udev->dev, "unsupported MDLM descriptors\n");
	return -ENODEV;
}

static const struct driver_info	bogus_mdlm_info = {
	.description =	"pseudo-MDLM (BLAN) device",
	.flags =	FLAG_POINTTOPOINT | FLAG_FRAMING_Z,
	.check_connect = always_connected,
	.tx_fixup =	zaurus_tx_fixup,
	.bind =		blan_mdlm_bind,
};

static const struct usb_device_id	products [] = {
#define	ZAURUS_MASTER_INTERFACE \
	.bInterfaceClass	= USB_CLASS_COMM, \
	.bInterfaceSubClass	= USB_CDC_SUBCLASS_ETHERNET, \
	.bInterfaceProtocol	= USB_CDC_PROTO_NONE

/*                                                       */
{
	.match_flags	=   USB_DEVICE_ID_MATCH_INT_INFO
			  | USB_DEVICE_ID_MATCH_DEVICE,
	.idVendor		= 0x04DD,
	.idProduct		= 0x8004,
	ZAURUS_MASTER_INTERFACE,
	.driver_info = ZAURUS_STRONGARM_INFO,
},

/*                                                               
                                                                 
                                           
  
                                                                       
                                                    
 */
{
	.match_flags	=   USB_DEVICE_ID_MATCH_INT_INFO
			  | USB_DEVICE_ID_MATCH_DEVICE,
	.idVendor		= 0x04DD,
	.idProduct		= 0x8005,	/*       */
	ZAURUS_MASTER_INTERFACE,
	.driver_info = ZAURUS_PXA_INFO,
}, {
	.match_flags	=   USB_DEVICE_ID_MATCH_INT_INFO
			  | USB_DEVICE_ID_MATCH_DEVICE,
	.idVendor		= 0x04DD,
	.idProduct		= 0x8006,	/*               */
	ZAURUS_MASTER_INTERFACE,
	.driver_info = ZAURUS_PXA_INFO,
}, {
	.match_flags    =   USB_DEVICE_ID_MATCH_INT_INFO
	          | USB_DEVICE_ID_MATCH_DEVICE,
	.idVendor		= 0x04DD,
	.idProduct		= 0x8007,	/*       */
	ZAURUS_MASTER_INTERFACE,
	.driver_info = ZAURUS_PXA_INFO,
}, {
	.match_flags    =   USB_DEVICE_ID_MATCH_INT_INFO
		 | USB_DEVICE_ID_MATCH_DEVICE,
	.idVendor               = 0x04DD,
	.idProduct              = 0x9031,	/*             */
	ZAURUS_MASTER_INTERFACE,
	.driver_info = ZAURUS_PXA_INFO,
}, {
	/*                                             */
	USB_DEVICE_AND_INTERFACE_INFO(0x04DD, 0x9031, USB_CLASS_COMM,
			USB_CDC_SUBCLASS_MDLM, USB_CDC_PROTO_NONE),
	.driver_info = (unsigned long) &bogus_mdlm_info,
}, {
	.match_flags    =   USB_DEVICE_ID_MATCH_INT_INFO
		 | USB_DEVICE_ID_MATCH_DEVICE,
	.idVendor               = 0x04DD,
	.idProduct              = 0x9032,	/*         */
	ZAURUS_MASTER_INTERFACE,
	.driver_info = ZAURUS_PXA_INFO,
}, {
	.match_flags    =   USB_DEVICE_ID_MATCH_INT_INFO
		 | USB_DEVICE_ID_MATCH_DEVICE,
	.idVendor               = 0x04DD,
	/*                               */
	.idProduct              = 0x9050,	/*       */
	ZAURUS_MASTER_INTERFACE,
	.driver_info = ZAURUS_PXA_INFO,
},
{
	/*                  */
	USB_DEVICE_AND_INTERFACE_INFO(0x22b8, 0x6027, USB_CLASS_COMM,
			USB_CDC_SUBCLASS_MDLM, USB_CDC_PROTO_NONE),
	.driver_info = (unsigned long) &bogus_mdlm_info,
}, {
	/*                          */
	USB_DEVICE_AND_INTERFACE_INFO(0x22b8, 0x6425, USB_CLASS_COMM,
			USB_CDC_SUBCLASS_MDLM, USB_CDC_PROTO_NONE),
	.driver_info = (unsigned long) &bogus_mdlm_info,
},

/*                                                         
                                             
 */
{
	.match_flags    =   USB_DEVICE_ID_MATCH_INT_INFO
		 | USB_DEVICE_ID_MATCH_DEVICE,
	.idVendor               = 0x07B4,
	.idProduct              = 0x0F02,	/*        */
	ZAURUS_MASTER_INTERFACE,
	.driver_info = OLYMPUS_MXL_INFO,
},

/*                                                           */
{
	USB_DEVICE_AND_INTERFACE_INFO(0x046d, 0xc11f, USB_CLASS_COMM,
			USB_CDC_SUBCLASS_MDLM, USB_CDC_PROTO_NONE),
	.driver_info = (unsigned long) &bogus_mdlm_info,
},
	{ },		//    
};
MODULE_DEVICE_TABLE(usb, products);

static struct usb_driver zaurus_driver = {
	.name =		"zaurus",
	.id_table =	products,
	.probe =	usbnet_probe,
	.disconnect =	usbnet_disconnect,
	.suspend =	usbnet_suspend,
	.resume =	usbnet_resume,
};

module_usb_driver(zaurus_driver);

MODULE_AUTHOR("Pavel Machek, David Brownell");
MODULE_DESCRIPTION("Sharp Zaurus PDA, and compatible products");
MODULE_LICENSE("GPL");
