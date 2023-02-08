/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:46:47 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/02/01 17:03:08 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_power(int n, int p);
char	*ft_putnbr_base(int nbr, char *base, int plma);

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				return (0);
			if ((base[j] >= 9 && base[j] <= 13) || base[j] == 32)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*check_sign(char *str, int *plma)
{
	*plma = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*plma *= -1;
		str++;
	}
	return (str);
}

char	*ft_atoi(char *str, char *base, int *plma, int *size)
{
	int	i;
	int	j;
	int	valid;

	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	str = check_sign(str, plma);
	while (*str != '\0')
	{
		j = 0;
		valid = 0;
		while (base[j] != '\0')
		{
			if (*str == base[j])
				valid = 1;
			j++;
		}
		if (valid == 0)
			break ;
		str++;
		i++;
	}
	*size = i;
	return (str - i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	nb;
	int			plma;
	int			size;
	int			i;
	int			n;

	nb = 0;
	i = 0;
	nbr = ft_atoi(nbr, base_from, &plma, &size);
	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	while (i < size)
	{
		n = 0;
		while (base_from[n] != nbr[i])
			n++;
		nb += n * ft_power(ft_strlen(base_from), (size - i - 1));
		i++;
	}
	return (ft_putnbr_base(nb, base_to, plma));
}
#include <stdio.h>


void test_convert_base(char* nbr) {
	printf("%s => %s\n", nbr, ft_convert_base(nbr, "0123456789", "0123456789abcdef"));
}

int main() {
	test_convert_base("0");
	test_convert_base("1");
	test_convert_base("42");
	test_convert_base("-42");
	test_convert_base("-- ");
	test_convert_base("-2147483648");

	return 0;
}
