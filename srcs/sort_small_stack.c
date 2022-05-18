/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:48:41 by jereverd          #+#    #+#             */
/*   Updated: 2022/04/26 10:48:42 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int is_sorted(t_stack *stack)
{
	while (stack->first > stack->first->next)
	{
		if (stack->first > stack->first->next)
			return (FALSE);
		stack->first = stack->first->next;
	}
	return (TRUE);
}

void	sort_three(t_stack *stack)
{
	while (stack && is_sorted(&stack) == FALSE)
	{
		if (stack->first > stack->first->next)
			swap(&stack, "sa");
		else if (stack->first > stack->first->next->next)
			reverse_rotate(&stack, "rra");
	}
}