/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/07 11:04:29 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/07 11:04:31 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numchr(char *s2, char c)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == c)
			nbr++;
		i++;
	}
	return (nbr);
}
