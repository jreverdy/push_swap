/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:39:27 by jereverd          #+#    #+#             */
/*   Updated: 2022/02/08 14:39:29 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "../incs/push_swap.h"

int	check_input(char *av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if (av[i] == '-')
			i++;
		if (ft_isdigit(av[i]) == 0)
			return (-1);
		i++;
	}
	return (0);
}

int	check_duplicate_numbers(int ac, char **av)
{
	int i;
	int j;
	int len;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strlen(av[i]) > ft_strlen(av[j]))
				len = ft_strlen(av[i]);
			else
				len = ft_strlen(av[j]);
			if (ft_strncmp(av[i], av[j], len) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int check_int(char *av)
{
	long	nb;

	nb = ft_atol(av);
	if (nb < INT_MIN || nb > INT_MAX)
		return (-1);
	return (0);
}

int	ft_print_error_message(int i)
{
	if (i == 1)
	{
		ft_printf("Not only numbers\n");
		exit(0);
	}
	if (i == 2)
	{
		ft_printf("There is duplicate numbers in the arguments\n");
		exit(0);
	}
	if (i == 3)
	{
		ft_printf("Overflow or underflow\n");
		exit(0);
	}
	if (i == 4)
	{
		ft_printf("Zero and minus zero are a duplicate\n");
		exit(0);
	}
	return (0);
}

int check_minus_zero(int ac, char **av)
{
	int i;
	int	zero;
	int zero_minus;

	i = 1;
	zero = 0;
	zero_minus = 0;
	while (i < ac)
	{
		if (av[i][0] != '-' && ft_atol(av[i]) == 0)
			zero++;
		else if (av[i][0] == '-' && ft_atol(av[i]) == 0)
			zero_minus++;
		i++;
	}
	if (zero > 0 && zero_minus > 0)
		return (-1);
	return (0);
}

int	check_errors(int ac, char **av)
{
	int i;
	if (ac < 3)
	{
		ft_printf("At least two numbers are required to be sort (=\n");
		exit(1);
	}
	i = 0;
	while (av[++i])
		if (check_input(av[i]) == -1)
			return (ft_print_error_message(1));
	i = 0;
	while (av[++i])
		if (check_duplicate_numbers(ac, av) == -1)
			return (ft_print_error_message(2));
	i = 0;
	while (av[++i])
		if (check_int(av[i]) == -1)
			return (ft_print_error_message(3));
	i = 0;
	while (av[++i])
		if (check_minus_zero(ac, av) == -1)
			return (ft_print_error_message(4));
	return (0);
}