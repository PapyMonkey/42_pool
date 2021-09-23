/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:50:58 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/15 00:11:48 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char_special(char c)
{
	int	flag_result;

	flag_result = 0;
	if (c < 48 || c > 122 || (57 < c && c < 65) || (90 < c && c < 97))
		flag_result = 1;
	return (flag_result);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i_dep;

	i = 0;
	i_dep = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_is_char_special(str[i]))
		{
			if (97 <= str[i_dep] && str[i_dep] <= 122)
				str[i_dep] -= 32;
			i_dep = i + 1;
		}
		i++;
	}
	i++;
	if (ft_is_char_special(str[i]))
	{
		if (97 <= str[i_dep] && str[i_dep] <= 122)
			str[i_dep] -= 32;
		i_dep = i + 1;
	}
	return (str);
}
