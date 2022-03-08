/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:34:37 by jereverd          #+#    #+#             */
/*   Updated: 2022/02/08 13:34:40 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	init_stack(t_stack *a, t_stack *b, int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 1;
	a->size = ac - 1;
	b->size = 0;
	a->tab = ft_calloc(a->size, sizeof(int));
	b->tab = ft_calloc(b->size, sizeof(int));
	while (j < ac)
	{
		a->tab[i] = ft_atoi(av[j]);
		i++;
		j++;
	}
}

int main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	check_errors(ac, av);
	init_stack(&a, &b, ac, av);
	return (0);
}
