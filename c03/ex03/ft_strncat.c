/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:09:54 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/19 18:08:20 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (*src && 0 < nb)
	{
		*tmp = *src;
		tmp++;
		src++;
		nb--;
	}
	*tmp = '\0';
	return (dest);
}
