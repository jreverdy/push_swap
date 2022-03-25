/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:27:21 by jereverd          #+#    #+#             */
/*   Updated: 2022/03/09 13:27:22 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	swap_a(t_stack **a)
{
	t_stack	*tmp;
	t_stack *tmp2;

	tmp = NULL;
	tmp2 = NULL;
	if (stack_size(*a) > 1)
	{
		tmp = *a;
		tmp2 = tmp->next;
		tmp->next = tmp->next->next;
		tmp2->next = tmp;
		*a = tmp2;
		ft_printf("sa\n");
	}
}

void	swap_b(t_stack **b)
{
	t_stack	*tmp;
	t_stack *tmp2;

	tmp = NULL;
	tmp2 = NULL;
	if (stack_size(*b) > 1)
	{
		tmp = *b;
		tmp2 = tmp->next;
		tmp->next = tmp->next->next;
		tmp2->next = tmp;
		*b = tmp2;
		ft_printf("sa\n");
	}
}

void	swap_both(t_stack **a, t_stack **b)
{
	if (stack_size(*a) > 1 || stack_size(*b) > 1)
	{
		swap_a(*a);
		swap_b(*b);
	}
	ft_printf("ss\n");
}