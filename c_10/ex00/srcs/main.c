/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:42:15 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/23 15:42:02 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	ret;
	int	buf[BUF_SIZE];

	if (!ft_is_argc_ok(argc))
		return (1);
	fd = open(argv[1], O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	if (!ft_is_file_ok(fd) || !ft_is_file_ok(ret))
		return (1);
	while (ret != 0)
	{
		ft_putchar(*buf);
		ret = read(fd, buf, BUF_SIZE);
	}
	return (0);
}

