/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_group_three.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 21:54:38 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/26 23:32:56 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_set_cursor(t_dico *dico)
{
	int	i;

	i = 0;
	while (ft_strlen(dico[i].nbr) < 4)
		i++;
	return (i);
}

void	ft_three_leap_putstr(t_dico *dico, int count, int n, int len)
{
	ft_putstr(" ");
	ft_putstr(dico[count].letters);
	if (n != len)
		ft_putstr(" ");
}

int	ft_three_leap(char *nbr, t_dico *dico)
{
	int		n;
	int		len;
	int		count;
	char	*input;

	n = 0;
	len = ft_strlen(nbr) - 1;
	count = ft_set_cursor(dico) + (len / 3);
	while (n < len)
	{
		if (n == 0 && len % 3 != 0)
			input = ft_fill_zero(nbr, len % 3);
		else
			input = nbr;
		if (ft_digitreader(input, dico, n) == 0)
			return (0);
		if ((input[n] != '0' || input [n + 1] != '0' || input [n + 2] != '0')
			&& count > ft_set_cursor(dico))
			ft_three_leap_putstr(dico, count--, n, len);
		if (n == 0 && len % 3 != 0)
			n += len % 3;
		else
			n += 3;
	}
	return (1);
}
