/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 21:19:19 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/15 21:53:23 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_params(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i] != '\0')
		i++;
	i--;
	while (i > 0)
	{
		j = 0;
		while (str[i][j])
		{
			ft_putchar(str[i][j]);
			j++;
		}
		i--;
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_print_params(argv);
	return (0);
}
