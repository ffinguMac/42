/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:37:53 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/31 13:16:03 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	c_s1;
	unsigned char	c_s2;

	c_s1 = (unsigned char)*s1;
	c_s2 = (unsigned char)*s2;
	while (1)
	{
		c_s1 = *s1++;
		c_s2 = *s2++;
		if (c_s1 != c_s2)
			return (c_s1 - c_s2);
		if (!c_s1 || !c_s2)
			break ;
	}
	return (0);
}
