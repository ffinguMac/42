/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:14:40 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/01/24 12:24:45 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

int	find_base(char c, char *base)
{
	int	idx;

	idx = 0;
	while (base[idx])
	{
		if (c == base[idx])
			return (idx);
		idx++;
	}
	return (-1);
}

int	base_len(char *base)
{
	int	size;

	size = 0;
	while (base[size] != '\0')
	{
		if (base[size] == '+' || base[size] == '-')
			return (0);
		if ((base[size] >= 9 && base[size] <= 13) || base[size] == 32)
			return (0);
		if (find_base(base[size], base + size + 1) >= 0)
			return (0);
		size++;
	}
	return (size);
}

int	ft_atoi_base(char *str, char *base)
{
	int	b_len;
	int	result;
	int	plma;
	int	i;

	b_len = base_len(base);
	result = 0;
	plma = 1;
	i = 0;
	if (b_len < 2)
		return (0);
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			plma *= -1;
		i++;
	}
	while (find_base(str[i], base) >= 0)
	{
		result = result * b_len + find_base(str[i], base);
		i++;
	}
	return (result * plma);
}
