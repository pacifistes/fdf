/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_and_direction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 13:28:05 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/01 13:28:11 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	droite_bas(t_point *p)
{
	p->dx = p->b_x - p->a_x;
	p->dy = p->b_y - p->a_y;
	if (p->dx >= p->dy)
		cas2_a(p);
	else
		cas2_b(p);
}

void	droite_haut(t_point *p)
{
	int swap;

	p->dx = p->b_x - p->a_x;
	p->dy = p->a_y - p->b_y;
	swap = p->b_x;
	p->b_x = p->a_x;
	p->a_x = swap;
	swap = p->b_y;
	p->b_y = p->a_y;
	p->a_y = swap;
	if (p->dx >= p->dy)
		cas1_a(p);
	else
		cas1_b(p);
}

void	gauche_bas(t_point *p)
{
	p->dx = p->a_x - p->b_x;
	p->dy = p->b_y - p->a_y;
	if (p->dx >= p->dy)
		cas1_a(p);
	else
		cas1_b(p);
}

void	gauche_haut(t_point *p)
{
	int swap;

	p->dx = p->a_x - p->b_x;
	p->dy = p->a_y - p->b_y;
	swap = p->b_x;
	p->b_x = p->a_x;
	p->a_x = swap;
	swap = p->b_y;
	p->b_y = p->a_y;
	p->a_y = swap;
	p->dx = p->b_x - p->a_x;
	p->dy = p->b_y - p->a_y;
	if (p->dx >= p->dy)
		cas2_a(p);
	else
		cas2_b(p);
}
