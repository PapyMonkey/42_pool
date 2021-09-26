/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_v2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: losylves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:27:50 by losylves          #+#    #+#             */
/*   Updated: 2021/09/26 21:36:46 by losylves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_count_word(char *str)
{
	int	a;
	int	count;

	count = 1;
	a = 0;
	while (str[a])
	{
		if (str[a] == ':' || str[a] == '\n')
		{
			count++;
			while (!((str[a] > 64 && str[a] < 91)
					|| (str[a] > 96 && str[a] < 123)
					|| (str[a] > 47 && str[a] < 58)) && str[a])
				a++;
			continue ;
		}
		a++;
	}
	return (count);
}

int	ft_strlen_custom(char *str)
{
	int	a;

	a = 0;
	while (str[a] != ':' && str[a] != '\n' && str[a])
		a++;
	return (a);
}

char	*ft_strdup(char *str, int len)
{
	int		a;
	char	*dup;

	a = 0;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	while (a < len)
	{
		dup[a] = str[a];
		a++;
	}
	dup[a] = '\0';
	return (dup);
}

char	**ft_double_split(char *str)
{
	char	**tab;
	int		a;
	int		b;
	int		size;
	int		len;

	a = 0;
	b = 0;
	size = ft_count_word(str);
	tab = (char **)malloc(sizeof(char *) * (size + 1));
	while (str[a])
	{
		while (str[a] == ' ' || str[a] == '\n'
			|| str[a] == ':')
			a++;
		len = ft_strlen_custom(str + a);
		tab[b] = ft_strdup(str + a, len);
		while (str[a] != ' ' && str[a] != '\n'
			&& str[a] != ':' && str[a] != '\0')
			a++;
		b++;
	}
	tab[b] = NULL;
	return (tab);
}

t_dico	*ft_set_dico(char **str)
{
	int		i;
	int		j;
	int		a;
	int		size;
	t_dico	*dico;

	a = 0;
	i = 0;
	j = 1;
	size = 0;
	while (str[size])
		size++;
	dico = malloc(sizeof(t_dico) * size + 1);
	while (str[j] && str[i])
	{
		dico[a].nbr = ft_strdup(str[i], ft_strlen(str[i]));
		dico[a].letters = ft_strdup(str[j], ft_strlen(str[j]));
		i += 2;
		j += 2;
		a++;
	}
	return (dico);
}
