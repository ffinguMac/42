/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:15:36 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/31 13:15:49 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if ((is_sep(str[i + 1], charset) == 1 && is_sep(str[i], charset) == 0))
			word++;
		i++;
	}
	return (word);
}

void	write_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (is_sep(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **arr, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_sep(str[i + j], charset) == 0)
				j++;
			arr[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(arr[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		word;

	word = count_word(str, charset);
	arr = (char **)malloc(sizeof(char *) * (word + 1));
	arr[word] = 0;
	write_split(arr, str, charset);
	return (arr);
}
