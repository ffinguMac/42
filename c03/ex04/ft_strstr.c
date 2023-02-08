/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:55:14 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/19 18:08:19 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*t_str;
	char	*t_find;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			t_str = str + 1;
			t_find = to_find + 1;
			while (*t_str != '\0' && *t_find != '\0' && *t_str == *t_find)
			{
				t_str++;
				t_find++;
			}
			if (*t_find == 0)
				return (str);
			if (*t_str == 0)
				break ;
		}
		str++;
	}
	return (0);
}
