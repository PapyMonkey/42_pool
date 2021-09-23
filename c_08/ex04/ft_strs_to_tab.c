/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:29:44 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/21 18:04:40 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					j;
	struct s_stock_str	*res;

	i = 0;
	res = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	while (av[i])
	{
		j = 0;
		res[i].size = ft_strlen(av[i]);
		res[i].str = malloc(sizeof(char) * res[i].size);
		res[i].copy = malloc(sizeof(char) * res[i].size);
		while (j < res[i].size)
		{
			res[i].str[j] = av[i][j];
			res[i].copy[j] = av[i][j];
			j++;
		}
		i++;
	}
	res[i].str = 0;
	return (res);
}
