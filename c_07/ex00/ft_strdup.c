/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:38:27 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/30 11:18:04 by aguiri           ###   ########.fr       */
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

char	*ft_strdup(char *src)
{	
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = ft_strlen(src);
	cpy = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		*(cpy + i) = *(src + i);
		i++;
	}
	cpy[len] = '\0';
	return (cpy);
}
