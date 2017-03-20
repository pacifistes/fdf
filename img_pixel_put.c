/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_pixel_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 12:55:22 by bbrunell          #+#    #+#             */
/*   Updated: 2016/03/22 12:55:25 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			img_pixel_put(t_point *img, int x, int y, size_t color)
{
	size_t	index;

	if (y >= HAUTEUR || x >= LARGEUR || x < 0 || y < 0)
		return ;
	index = (y * img->size_l) + x * (img->bpp / 8);
	img->data[index + 3] = (color & 0xFF000000) >> 24;
	img->data[index + 2] = (color & 0x00FF0000) >> 16;
	img->data[index + 1] = (color & 0x0000FF00) >> 8;
	img->data[index] = color & 0x000000FF;
}
