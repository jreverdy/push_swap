/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:27:11 by jereverd          #+#    #+#             */
/*   Updated: 2022/03/09 13:27:12 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	rotate(t_stack *stack, char *to_write)
{
	stack->first = stack->first->next;
	printf("%s\n", to_write);
}

void	reverse_rotate(t_stack *stack, char *to_write)
{
//	t_dlist *tmp;
//
//	tmp = stack->first->prev;
	stack->first->next = stack->first;
	printf("%s\n", to_write);
}