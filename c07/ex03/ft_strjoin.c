/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:21:13 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/02/02 11:05:40 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (*src)
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';
	return (dest);
}

int	malloc_size(int size, char **strs, char *sep)
{
	int	strs_len;
	int	sep_len;
	int	i;

	strs_len = 0;
	sep_len = ft_len(sep);
	i = 0;
	if (size == 1)
		return (ft_len(strs[0]) + 1);
	while (i < size - 1)
	{
		strs_len += ft_len(strs[i]);
		strs_len += sep_len;
		i++;
	}
	strs_len += ft_len(strs[i]);
	return (strs_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*arr;

	if (size == 0)
	{
		arr = (char *)malloc(1);
		arr[0] = 0;
		return (arr);
	}
	length = malloc_size(size, strs, sep);
	arr = (char *)malloc(length * sizeof(char));
	i = 0;
	if (*(arr + i) != 0)
		*(arr + i) = 0;
	while (i < (size - 1))
	{
		arr = ft_strcat(arr, *(strs + i));
		arr = ft_strcat(arr, sep);
		i++;
	}
	arr = ft_strcat(arr, *(strs + i));
	return (arr);
}
