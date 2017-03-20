/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 11:58:29 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/01 11:59:43 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_color_ligne(t_point *p)
{
	if (p->tab[p->y][p->x] == p->tab[p->y][(p->x + 1)] &&
		p->tab[p->y][p->x] <= 0)
	{
		p->color = p->color1;
		return (p->color1);
	}
	else if (p->tab[p->y][p->x] != p->tab[p->y][(p->x + 1)])
	{
		p->color = p->color2;
		return (p->color2);
	}
	p->color = p->color3;
	return (p->color3);
}

int		ft_color_colonne(t_point *p)
{
	if (p->tab[p->y][p->x] == p->tab[(p->y + 1)][p->x] &&
		p->tab[p->y][p->x] <= 0)
	{
		p->color = p->color1;
		return (p->color1);
	}
	else if (p->tab[p->y][p->x] != p->tab[(p->y + 1)][p->x])
	{
		p->color = p->color2;
		return (p->color2);
	}
	else
	{
		p->color = p->color3;
		return (p->color3);
	}
	return (0);
}
