/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:08:32 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/26 21:29:48 by losylves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_def_filename(const int argc, char **argv)
{
	if (argc == 2)
		return ("numbers.dict.txt");
	else
		return (argv[2]);
}

char	*ft_put_in_split(const char *filename)
{
	char	bb;
	int		a;
	int		fd;
	char	*str;
	char	*str2;

	a = 0;
	fd = open(filename, O_RDONLY);
	while (read(fd, &bb, 1))
		a++;
	close(fd);
	str = (char *)malloc(sizeof(char) * (a + 1));
	str2 = (char *)malloc(sizeof(char) * (a + 1));
	a = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (read(fd, str, 1))
	{
		str2[a] = str[0];
		a++;
	}
	free(str);
	str2[a] = '\0';
	return (str2);
}
