/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 11:46:03 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/07 11:46:05 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_zoom(t_point *p)
{
	int i;
	int j;

	i = 0;
	j = 0;
	i = (LARGEUR - 330) / (p->k + (p->i / 2));
	j = HAUTEUR / (p->i + (p->k / 2));
	if (i < 2 || j < 2)
		return (2);
	if (i <= j)
		return (i);
	return (j);
}

void	ft_init_m_p(t_point *p)
{
	p->zoom = ft_zoom(p);
	p->color3 = 0x01B0F0;
	p->color2 = 0xFFFAF4;
	p->color1 = 0xAEEE00;
	p->gaudroite = (p->zoom / 2) * p->k;
	p->bas_haut = 0;
	p->z = 0.2;
}
