/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:22:53 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/16 19:17:52 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_separation_comb2(int num1, int num2)
{
	int	i[4];

	i[0] = num1 / 10;
	i[1] = num1 % 10;
	i[2] = num2 / 10;
	i[3] = num2 % 10;
	ft_putchar(i[0] + 48);
	ft_putchar(i[1] + 48);
	ft_putchar(' ');
	ft_putchar(i[2] + 48);
	ft_putchar(i[3] + 48);
	if (num1 != 98 || num2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_separation_comb2(a, b);
			b++;
		}
		a++;
	}
}
