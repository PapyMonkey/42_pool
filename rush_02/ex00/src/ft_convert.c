/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losylves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:39:41 by losylves          #+#    #+#             */
/*   Updated: 2021/09/26 21:23:55 by losylves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	nbr;

	a = 0;
	b = 0;
	nbr = 0;
	while (str[a] == '\t' || str[a] == '\v' || str[a] == '\n'
		|| str[a] == '\r' || str[a] == '\f' || str[a] == ' ')
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b++;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		nbr *= 10;
		nbr += str[a] - 48;
		a++;
	}
	if (b % 2 == 1)
		nbr *= -1;
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;
	int		n;
	int		buf;

	buf = ft_abs(nbr);
	n = ft_intlen(nbr);
	if (nbr < 0)
		n++;
	len = n + 1;
	res = malloc(sizeof(char) * len);
	while (n)
	{
		res[n - 1] = (buf % 10) + 48;
		buf = buf / 10;
		n--;
	}
	if (nbr < 0)
		res[0] = '-';
	res[len - 1] = '\0';
	return (res);
}
