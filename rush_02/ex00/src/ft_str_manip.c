/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_manip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:04:25 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/26 23:33:20 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	n_count;

	n_count = 1;
	if (n == 0)
		return (0);
	while (n_count < n && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n_count++;
	}
	return (*s1 - *s2);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen_dico(t_dico *dico)
{
	int	i;

	i = 0;
	while (dico[i].nbr == '\0')
		i++;
	return (i);
}
