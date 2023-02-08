/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewoopa <jaewoopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:54:58 by jaewoopa          #+#    #+#             */
/*   Updated: 2023/02/02 17:02:59 by jaewoopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		get_op(char *oper);
int		test(char *value1, char *value2, int op, int *nbr);
void	calculator(char *value1, char *oper, char *value2);
int		add(int value1, int value2);
int		sub(int value1, int value2);
int		mul(int value1, int value2);
int		div(int value1, int value2);
int		mod(int value1, int value2);
#endif