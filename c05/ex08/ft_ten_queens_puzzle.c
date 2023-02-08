/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:29:54 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/27 20:00:16 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_queen(int *tab, int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i + tab[i] == x + y || i - tab[i] == x - y || y == tab[i])
			return (0);
		i++;
	}
	return (1);
}

void	queen_puzzle(int *tab, int *result, int idx)
{
	int	i;
	int	j;

	if (idx == 10)
	{
		*result += 1;
		j = -1;
		while (++j < 10)
		{
			ft_putchar(tab[j] + '0');
		}
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (check_queen(tab, idx, i))
			{
				tab[idx] = i;
				queen_puzzle(tab, result, idx + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (i < 10)
	{
		tab[i] = -1;
		i++;
	}
	queen_puzzle(tab, &result, 0);
	return (result);
}
