/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:17:50 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/02/02 21:01:16 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i], tab[j]) > 0)
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
