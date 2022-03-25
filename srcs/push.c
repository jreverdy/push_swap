/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:26:59 by jereverd          #+#    #+#             */
/*   Updated: 2022/03/09 13:27:00 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	push_a(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = NULL;
	tmp = *b;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("pa\n");
}

void	push_b(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = null;
	tmp = *a;
	*a = tmp->next;
	tmp->next =  *b;
	*b = tmp;
	ft_printf("pb\n");
}