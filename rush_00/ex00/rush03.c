/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:02:01 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/10 23:51:23 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_ifprint(const int x, const int y, const int n_x, const int n_y)
{	
	if (n_x == 1 && (n_y == 1 || n_y == y))
		ft_putchar('A');
	if (n_x == x && (n_y == 1 || n_y == y) && x != 1)
		ft_putchar('C');
	if ((n_x == 1 || n_x == x) && n_y != 1 && n_y != y)
		ft_putchar('B');
	if ((n_y == 1 || n_y == y) && n_x != 1 && n_x != x)
		ft_putchar('B');
	if (n_x != 1 && n_x != x && n_y != 1 && n_y != y)
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	n_x;
	int	n_y;

	n_y = 1;
	while (n_y <= y)
	{
		n_x = 1;
		while (n_x <= x)
		{
			ft_ifprint(x, y, n_x, n_y);
			n_x++;
		}
		ft_putchar('\n');
		n_y++;
	}
}
