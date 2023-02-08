/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:53:20 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/02/02 17:11:02 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	ft_atoi(char *str)
{
	int	result;
	int	plma;

	result = 0;
	plma = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			plma *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * plma);
}

int	get_op(char *oper)
{
	int		i;
	char	*arr;

	i = 0;
	arr = "+-*/%";
	while (arr[i] != '\0')
	{
		if (arr[i] == oper[0] && oper[1] == '\0')
			return (i);
		i++;
	}
	return (-1);
}

int	test(char *value1, char *value2, int op, int *nbr)
{
	nbr[0] = ft_atoi(value1);
	nbr[1] = ft_atoi(value2);
	if (nbr[1] == 0 && ((op == 3) || (op == 4)))
	{
		if (op == 3)
			ft_putstr("Stop : division by zero");
		if (op == 4)
			ft_putstr("Stop : modulo by zero");
		return (0);
	}
	return (1);
}

void	calculator(char *value1, char *oper, char *value2)
{
	int	(*tab[5])(int, int);
	int	op;
	int	nbr[2];

	tab[0] = add;
	tab[1] = sub;
	tab[2] = mul;
	tab[3] = div;
	tab[4] = mod;
	op = get_op(oper);
	if (op != -1)
	{
		if (test(value1, value2, op, nbr) != 0)
			ft_putnbr(tab[op](nbr[0], nbr[1]));
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		calculator(argv[1], argv[2], argv[3]);
}
