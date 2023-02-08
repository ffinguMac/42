/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:46:51 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/30 18:42:52 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_power(int n, int p)
{
	int	result;

	result = 1;
	if (p < 0)
		return (0);
	while (p > 0)
	{
		result *= n;
		p--;
	}
	return (result);
}

int	get_len(long long nbr, int size, int plma)
{
	int	i;

	i = 0;
	if (plma == -1)
		i++;
	while (nbr > 0)
	{
		nbr /= size;
		i++;
	}
	return (i);
}

char	*ft_print(long long nbr, char *base, char *arr, int plma)
{
	int	i;
	int	size;

	i = 0;
	size = get_len(nbr, ft_strlen(base), plma);
	if (plma == -1)
		arr[0] = '-';
	if (nbr == 0)
	{
		arr[0] = base[0];
		arr[1] = '\0';
	}
	while (nbr > 0)
	{
		arr[(size - i - 1)] = base[nbr % ft_strlen(base)];
		i++;
		nbr /= ft_strlen(base);
	}
	return (arr);
}

char	*ft_putnbr_base(long long nbr, char *base, int plma)
{
	long long	nb;
	char		*arr;
	int			size;
	int			len;

	nb = nbr;
	size = ft_strlen(base);
	len = get_len(nb, size, plma);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);
	arr[len] = '\0';
	if ((plma == -1 && len == 1) || (len == 0 && plma == 0))
	{
		arr[0] = base[0];
		return (arr);
	}
	return (ft_print(nb, base, arr, plma));
}
