/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 13:10:31 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/20 15:23:21 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[n++] = strs[i][j++];
		if (i + 1 != size)
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
	while (i++ < size)
		tot_size += ft_strlen(strs[i]);
	res = malloc(sizeof(char) * tot_size);
	return (ft_strjoin2(size, strs, sep, res));
}
