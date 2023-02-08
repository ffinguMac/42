/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:18:07 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/18 15:29:38 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (65 <= *tmp && *tmp <= 90)
			*tmp += 32;
		tmp++;
	}
	return (str);
}
