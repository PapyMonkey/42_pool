/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 18:24:33 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/13 11:53:50 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count_dst;
	unsigned int	count_src;

	count_dst = 0;
	count_src = 0;
	while (count_dst != n)
	{
		if (*(src + count_src) != '\0')
		{
			*(dest + count_src) = *(src + count_src);
			count_src++;
		}
		else
			*(dest + count_dst) = 0;
		count_dst++;
	}
	return (dest);
}
