/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:00:23 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/02/02 20:58:04 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascend;
	int	descend;

	i = 0;
	ascend = 0;
	descend = 0;
	if (length <= 2)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			ascend++;
		if (f(tab[i], tab[i + 1]) >= 0)
			descend++;
		i++;
	}
	if (ascend == i || descend == i)
		return (1);
	return (0);
}
