/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_strct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlecoq-v <vlecoq-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 12:02:46 by vlecoq-v          #+#    #+#             */
/*   Updated: 2019/02/13 15:21:42 by vlecoq-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_prt_strct(t_conv *c)
{
	printf("\n----- PRINT --- STRUCT -----\n");
	printf("------------FLAG %d --------\n", c->flg);
	printf("mns %d pls %d zr %d spc %d\n", c->flg_tp.mns,
		c->flg_tp.pls, c->flg_tp.zr, c->flg_tp.spc);
	printf("prc %d sn %d tp %c  sz %s hstg %d \n",c->prc,
		c->sn, c->tp, c->sz_tp, c->flg_tp.hstg);
	printf("PRC_SZ %d WDTH %d PRT SPC %d  \n", c->prc_sz,
		c->wdth, c->prt_spc);
	printf("-----------BUFF %d --------\n", c->ind);
	printf("cmpt %d str_l %d ind %d\n", c->cmpt, c->str_l, c->ind);
	printf("STR |%s|\n", c->str);
	printf("arg = %lld\n", (long long)c->arg);
}
