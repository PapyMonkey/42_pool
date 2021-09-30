/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:29:44 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/29 20:26:08 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;
	int		j;

	i = 0;
	j = 0;
	while (src[i++] != '\0')
		;
	ptr = malloc(sizeof(src) * (i + 1));
	while (j < i)
	{
		ptr[j] = src[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			word;
	int			i;
	t_stock_str	*st;

	word = 0;
	i = 0;
	st = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!st)
		return (NULL);
	while (i < ac && av[i] != 0)
	{
		st[word].str = av[i];
		st[word].copy = ft_strdup(av[i]);
		st[word].size = ft_strlen(av[i]);
		word++;
		i++;
	}
	st[word].str = 0;
	return (st);
}
