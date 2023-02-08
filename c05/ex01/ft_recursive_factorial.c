/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:33:35 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/24 15:53:45 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	factorial(int nb)
{
	if (nb <= 1)
		return (1);
	return (nb * factorial(nb - 1));
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else
		return (factorial(nb));
}
