/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 00:29:02 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/16 00:54:25 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
		return (0);
	ptr = malloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		*(ptr + i) = min + i;
		i++;
	}
	return (ptr);
}
