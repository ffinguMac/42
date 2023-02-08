/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:25:35 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/18 15:29:37 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		state;
	char	t;

	i = 0;
	state = 1;
	while (*(str + i) != '\0')
	{
		t = *(str + i);
		if (state == 1 && t >= 97 && t <= 122)
			str[i] -= 32;
		else if (state == 0 && t >= 65 && t <= 90)
			str[i] += 32;
		if (t < 48 || (t > 57 && t < 65) || (t > 90 && t < 97) || t > 122)
			state = 1;
		else
			state = 0;
		i++;
	}
	return (str);
}
