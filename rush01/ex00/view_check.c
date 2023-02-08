/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:27:59 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/22 21:40:46 by heuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	view_check1(int arr[][6], int view_arr[])
{
	int	max;
	int	count;
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		max = -200;
		count = 0;
		while (j < 5)
		{
			if (arr[j][i] > max)
			{
				max = arr[j][i];
				count++;
			}
			j++;
		}
		if (view_arr[i - 1] != count)
			return (0);
		i++;
	}
	return (1);
}

int	view_check2(int arr[][6], int view_arr[])
{
	int	max;
	int	count;
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		max = -200;
		count = 0;
		while (j < 5)
		{
			if (arr[5 - j][i] > max)
			{
				max = arr[5 - j][i];
				count++;
			}
			j++;
		}
		if (view_arr[i + 3] != count)
			return (0);
		i++;
	}
	return (1);
}

int	view_check3(int arr[][6], int view_arr[])
{
	int	max;
	int	count;
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		max = -200;
		count = 0;
		while (j < 5)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				count++;
			}
			j++;
		}
		if (view_arr[i + 7] != count)
			return (0);
		i++;
	}
	return (1);
}

int	view_check4(int arr[][6], int view_arr[])
{
	int	max;
	int	count;
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		max = -200;
		count = 0;
		while (j < 5)
		{
			if (arr[i][5 - j] > max)
			{
				max = arr[i][5 - j];
				count++;
			}
			j++;
		}
		if (view_arr[i + 11] != count)
			return (0);
		i++;
	}
	return (1);
}

int	view_check(int arr[][6], int view_arr[])
{
	if (! view_check1(arr, view_arr))
		return (0);
	if (! view_check2(arr, view_arr))
		return (0);
	if (! view_check3(arr, view_arr))
		return (0);
	if (! view_check4(arr, view_arr))
		return (0);
	return (1);
}
