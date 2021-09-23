/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:54:37 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/18 20:19:42 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_char_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_separator(str[i + 1], charset)
			&& !ft_char_is_separator(str[i], charset))
			words++;
		i++;
	}
	return (words);
}

void	ft_write_words(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (!ft_char_is_separator(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_write_tab(char **str_split, char *str, char *charset)
{
	int	i;
	int	j;
	int	n_word;

	i = 0;
	n_word = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_separator(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!ft_char_is_separator(str[i + j], charset))
				j++;
			str_split[n_word] = malloc(sizeof(char) * (j + 1));
			ft_write_words(str_split[n_word], str + i, charset);
			if (str_split[n_word] == '\0')
				printf("ERROR\n");
			i += j;
			n_word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**str_splitted;
	int		n_words;

	n_words = ft_count_words(str, charset);
	str_splitted = malloc(sizeof(char *) * (n_words + 1));
	str_splitted[n_words] = 0;
	ft_write_tab(str_splitted, str, charset);
	return (str_splitted);
}
