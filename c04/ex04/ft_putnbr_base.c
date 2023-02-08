/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:16:22 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/24 12:28:18 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long long nb, char *base, int size)
{
	if (nb > size - 1)
	{
		ft_putnbr(nb / size, base, size);
		nb = nb % size;
	}
	ft_putchar(base[nb]);
}

int	same_base(char c, char *base)
{
	while (*base)
	{
		if (c == *base++)
			return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			size;
	long long	nb;

	nb = (long long)nbr;
	size = 0;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-')
			return ;
		if (same_base(base[size], base + size + 1))
			return ;
		size++;
	}
	if (size < 2)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb, base, size);
	}
	else
		ft_putnbr(nb, base, size);
}
