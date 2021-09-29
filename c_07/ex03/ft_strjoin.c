/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:10:31 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/29 22:46:48 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin2(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (i < size && ft_strcmp(strs[i], "\0"))
	{
		j = 0;
		while (strs[i][j])
			res[n++] = strs[i][j++];
		if (i + 1 != size && ft_strcmp(strs[i + 1], "\0"))
		{
			j = 0;
			while (sep[j])
				res[n++] = sep[j++];
		}
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tot_size;
	char	*res;

	i = 0;
	tot_size = (size - 1) * ft_strlen(sep);
	if (size == 0)
		return (0);
	while (i < size && ft_strcmp(strs[i], "\0"))
	{
		tot_size += ft_strlen(strs[i]);
		i++;
	}
	res = malloc(sizeof(char) * (tot_size + 1));
	res[tot_size] = '\0';
	return (ft_strjoin2(size, strs, sep, res));
}
