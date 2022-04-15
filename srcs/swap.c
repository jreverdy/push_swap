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

void	swap(t_stack *stack, char *to_write)
{
	t_dlist *tmp;
	t_dlist	*tmp2;

	if (stack->size > 1)
	{
		tmp = stack->first;
		tmp2 = stack->first->next;
		tmp->next = tmp->next->next;
		tmp2->next = tmp;
		stack->first = tmp2;
		printf("%s\n", to_write);
	}
}
