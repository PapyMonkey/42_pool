/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:31:16 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/14 22:09:48 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while ((str[i] != to_find[j]) && str[i])
			i++;
		while ((str[i] == to_find[j]) && str[i])
		{
			i++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i - j);
	}
	return (0);
}
