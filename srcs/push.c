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

void	push(t_stack *a, t_stack *b, char *to_write)
{
	t_dlist	*to_push;

	if (a->size == 0)
		return ;
	to_push = a->first;
	a->first = a->first->next;
	a->first->prev = to_push->prev;
	if(!b->first)
	{
		to_push->next = to_push;
		to_push->prev = to_push;
	}
	else
	{
		to_push->next = b->first;
		to_push->prev = b->first->prev;
		b->first->prev = to_push;
	}
	b->first = to_push;
	b->size++;
	a->size--;
	ft_printf("%s\n", to_write);
}