/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:28:24 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/16 15:25:57 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	len_fixe;
	unsigned int	len_dyna;

	if (!dst || !src)
		return (0);
	n = ft_strlen(src);
	if (size != 0)
	{
		if (n >= size)
			len_fixe = size - 1;
		else
			len_fixe = n;
		len_dyna = len_fixe;
		while (len_dyna-- != 0)
			*dst++ = *src++;
		dst[len_fixe] = '\0';
	}
	return (n);
}
