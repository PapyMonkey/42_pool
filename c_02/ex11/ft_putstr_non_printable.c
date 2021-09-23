/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:10:01 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/13 16:05:58 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_char_non_printable(char c)
{
	int	flag_result;

	flag_result = 0;
	if (c < 32 || c == 127)
		flag_result = 1;
	return (flag_result);
}

void	ft_ascii_to_hex(char c)
{
	int		i;
	int		div;
	int		mod;
	char	hex[2];

	div = c;
	i = 0;
	hex[0] = '0';
	hex[1] = '0';
	while (div != 0)
	{
		mod = div % 16;
		if (mod < 10)
			hex[i++] = 48 + mod;
		else
			hex[i++] = 87 + mod;
		div = div / 16;
	}
	ft_putchar('\\');
	ft_putchar(hex[0]);
	ft_putchar(hex[1]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_char_non_printable(str[i]))
			ft_ascii_to_hex(str[i++]);
		ft_putchar(str[i]);
		i++;
	}
}
