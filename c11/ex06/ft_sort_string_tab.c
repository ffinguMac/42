/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:17:31 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/02/02 20:59:41 by jaewoopa         ###   ########seoul.kr  */
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

void	ft_sort_string_tab(char **tab)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (tab[i + 1] != 0)
	{
		j = i + 1;
		while (tab[j] != 0)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
				j++;
			}
			else
				j++;
		}
		i++;
	}
}
