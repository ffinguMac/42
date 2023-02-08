/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihshin <jihshin@student.42.seoul.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:26:44 by jihshin           #+#    #+#             */
/*   Updated: 2023/01/15 11:31:03 by jihshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rush(int x, int y);

int	str_to_int(char *str)
{
	int			index;
	long long	result;
	int			count_10;

	count_10 = 1;
	result = 0;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	index = index - 1;
	while (index >= 0)
	{
		result = result + ((long long)(str[index] - '0')*(long long)count_10);
		count_10 = count_10 * 10;
		index--;
	}
	if (result >= -2147483648 && result <= 2147483647)
		return (result);
	else
	{
		write(1, "Please input int num\n", 21);
		return (-1);
	}
}

int	argc_is_int(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(48 <= str[index] && str[index] <= 57))
		{
			write(1, "Please input num\n", 17);
			return (-1);
		}
		if (index >= 10)
		{
			write(1, "Please input int num\n", 21);
			return (-1);
		}
		index++;
	}
	return ((str_to_int(str)));
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "Please put in 3 factor values.\n", 31);
		return (0);
	}
	x = argc_is_int(argv[1]);
	y = argc_is_int(argv[2]);
	if (x == -1 || y == -1)
		return (0);
	rush(x, y);
	return (0);
}
