/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:27:39 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/22 22:11:15 by heuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	find_case(int *drc, int arr[][6], int *view_arr, int *flag);

char	view_init(int *view_arr, char **argv)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] >= '0' && argv[1][index] <= '4')
			view_arr[count++] = argv[1][index] - '0';
		index++;
	}
	return (*view_arr);
}

int	error_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '4'))
			return (0);
		i++;
		if (str[i] == '\0')
			break ;
		if (str[i] != ' ')
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	print_error(void)
{
	write(2, "Error\n", 6);
	return (0);
}

void	arr_init(int arr[][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			arr[i][j] = 0;
			if (i == 0 || i == 5 || j == 0 || j == 5)
				arr[i][j] = 1;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	arr[6][6];
	int	view_arr[16];
	int	count;
	int	*flag;
	int	drc[3];

	drc[0] = 1;
	drc[1] = 1;
	drc[2] = 1;
	if (argc != 2 || !error_check(argv[1]))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	count = 0;
	view_init(view_arr, argv);
	flag = &count;
	arr_init(arr);
	find_case(drc, arr, view_arr, flag);
	if (*flag == 0)
		print_error();
}
