#ifndef _NF_NAT_CORE_H
#define _NF_NAT_CORE_H
#include <linux/list.h>
#include <net/netfilter/nf_conntrack.h>
#include <net/netfilter/nf_nat.h>

/*                                                                    
                                                                          */

extern unsigned int nf_nat_packet(struct nf_conn *ct,
				  enum ip_conntrack_info ctinfo,
				  unsigned int hooknum,
				  struct sk_buff *skb);

extern int nf_nat_icmp_reply_translation(struct nf_conn *ct,
					 enum ip_conntrack_info ctinfo,
					 unsigned int hooknum,
					 struct sk_buff *skb);

static inline int nf_nat_initialized(struct nf_conn *ct,
				     enum nf_nat_manip_type manip)
{
	if (manip == NF_NAT_MANIP_SRC)
		return ct->status & IPS_SRC_NAT_DONE;
	else
		return ct->status & IPS_DST_NAT_DONE;
}

struct nlattr;

extern int
(*nfnetlink_parse_nat_setup_hook)(struct nf_conn *ct,
				  enum nf_nat_manip_type manip,
				  const struct nlattr *attr);

#endif /*                */
