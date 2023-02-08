/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:57:16 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/17 19:07:41 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combn(int n, int val, int idx, char *arr)
{
	if (n == idx)
	{
		write(1, arr, n);
		if (arr[0] != 10 - n + '0')
			write(1, ", ", 2);
		return ;
	}
	while (val <= 9)
	{
		arr[idx] = val + '0';
		combn(n, val + 1, idx + 1, arr);
		val++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[9];

	combn(n, 0, 0, arr);
}
