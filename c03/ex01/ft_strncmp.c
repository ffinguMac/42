/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:54:09 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/19 18:08:23 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	c_s1;
	unsigned char	c_s2;
	unsigned int	i;

	c_s1 = (unsigned char)*s1;
	c_s2 = (unsigned char)*s2;
	i = 0;
	if (n == 0)
		return ('\0');
	while (i < n)
	{
		c_s1 = *s1++;
		c_s2 = *s2++;
		if (c_s1 != c_s2)
			return (c_s1 - c_s2);
		if (!c_s1 || !c_s2)
			break ;
		i++;
	}
	return (0);
}
