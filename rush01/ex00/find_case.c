/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heuchoi <heuchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:27:26 by heuchoi           #+#    #+#             */
/*   Updated: 2023/01/22 21:51:41 by heuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int	view_check(int arr[][6], int view_arr[]);

void	put_array(int arr[][6], int *flag)
{
	char	a;
	int		i;
	int		j;

	*flag = 1;
	i = 1;
	j = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			a = arr[i][j] + '0';
			write(1, &a, 1);
			if (j != 4)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	is_possible(int arr[][6], int row, int col, int value)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (arr[i][col] == value)
			return (0);
		if (arr[row][i] == value)
			return (0);
		i++;
	}
	return (1);
}

void	initi_arr(int rc[][2])
{
	rc[0][0] = 1;
	rc[1][0] = 0;
	rc[2][0] = -1;
	rc[3][0] = 0;
	rc[0][1] = 0;
	rc[1][1] = 1;
	rc[2][1] = 0;
	rc[3][1] = -1;
}

void	next_node(int drc1[], int drc[], int j)
{
	int	r[4];
	int	c[4];

	r[0] = 1;
	r[1] = 0;
	r[2] = -1;
	r[3] = 0;
	c[0] = 0;
	c[1] = 1;
	c[2] = 0;
	c[3] = -1;
	drc1[0] = drc[0] + 1;
	drc1[1] = drc[1] + r[j];
	drc1[2] = drc[2] + c[j];
}

void	find_case(int *drc, int arr[][6], int *view_arr, int *flag)
{
	int	drc1[3];
	int	rc[4][2];
	int	i;
	int	j;

	i = 0;
	initi_arr(rc);
	while (++i < 5)
	{
		if (!(is_possible(arr, drc[1], drc[2], i)))
			continue ;
		arr[drc[1]][drc[2]] = i;
		j = -1;
		while (++j < 4)
		{
			if (arr[drc[1] + rc[j][0]][drc[2] + rc[j][1]] == 0)
			{
				next_node(drc1, drc, j);
				find_case(drc1, arr, view_arr, flag);
			}
		}
	}
	if (drc[0] == 16 && view_check(arr, view_arr) && *flag == 0)
		put_array(arr, flag);
	arr[drc[1]][drc[2]] = 0;
}
