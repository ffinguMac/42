/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihshin <jihshin@student.42.seoul.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:44:08 by jihshin           #+#    #+#             */
/*   Updated: 2023/01/14 14:44:11 by jihshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_error(int x, int y);
void	is_corner(int x, int y, int x_max, int y_max);
void	is_x_y_edge(int x, int y, int x_max, int y_max);
void	is_blank(int x, int y, int x_max, int y_max);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c_x;
	int	r_y;

	c_x = 1;
	r_y = 1;
	if (is_error(x, y))
		return ;
	else
	{
		while (r_y <= y && r_y > 0)
		{
			c_x = 1;
			while (c_x <= x && c_x > 0)
			{
				is_corner(c_x, r_y, x, y);
				is_x_y_edge(c_x, r_y, x, y);
				is_blank(c_x, r_y, x, y);
				c_x++;
			}
			ft_putchar('\n');
			r_y++;
		}
	}
}

int	is_error(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "You can't make a rectangle.\n", 29);
		write(1, "Please enter a positive integer.\n", 34);
		return (1);
	}
	return (0);
}

void	is_corner(int x, int y, int x_max, int y_max)
{
	if ((x == 1 && y == 1) || (x == x_max && y == y_max && x != 1 && y != 1))
		ft_putchar('A');
	else if ((x == 1 && y == y_max) || (x == x_max && y == 1))
		ft_putchar('C');
}

void	is_x_y_edge(int x, int y, int x_max, int y_max)
{
	if (y == 1 && x >= 2 && x <= x_max - 1)
		ft_putchar('B');
	else if (y == y_max && x >= 2 && x <= x_max - 1)
		ft_putchar('B');
	if (x == 1 && y >= 2 && y <= y_max - 1)
		ft_putchar('B');
	else if (x == x_max && y >= 2 && y <= y_max - 1)
		ft_putchar('B');
}

void	is_blank(int x, int y, int x_max, int y_max)
{
	if ((2 <= y && y <= y_max - 1) && (2 <= x && x <= x_max))
		ft_putchar(' ');
}
