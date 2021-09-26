/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:38:06 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/26 14:17:35 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c++])
		;
	return (c);
}

int	ft_intlen(const int nbr)
{
	int	c;
	int	buf;

	c = 1;
	buf = nbr;
	while (buf > 10)
	{
		buf = buf / 10;
		c++;
	}
	return (c);
}
