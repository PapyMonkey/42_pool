/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 23:45:44 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/15 13:06:09 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen_and_test(char *str)
{
	unsigned int	len;
	unsigned int	count;

	len = 0;
	count = 0;
	while (str[len] != '\0')
	{
		if (str[len] == '+' || str[len] == '-')
			return (0);
		while (count < len)
		{
			if (str[count] == str[len])
				return (0);
			count++;
		}
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;
	unsigned int	div;
	unsigned int	mod;

	len = ft_strlen_and_test(base);
	if (len == 0 || len == 1)
		return ;
	if (nbr < 0)
	{
		div = nbr * -1;
		ft_putchar('-');
	}
	else
		div = nbr;
	mod = div % len;
	div = div / len;
	if (div != 0)
		ft_putnbr_base(div, base);
	ft_putchar(base[mod]);
}
