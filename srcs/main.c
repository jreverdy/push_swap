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

int	init_first(char **av, t_stack *a)
{
	t_dlist *new;


	new = malloc(sizeof(t_dlist));
	if (!new)
		return (-1);
	a->first = new;
	new->val = ft_atol(av[1]);
	new->prev = new;
	new->next = new;
	++a->size;
	return (0);
}

void	init_stack(t_stack *a, t_stack *b)
{
	a->size = 0;
	b->size = 0;
}

int	insert_elem(char *av, t_stack *a)
{
	t_dlist *elem;

	elem = malloc(sizeof(t_dlist));
	if (!elem)
	{
		return (-1);
	}
	elem->val = ft_atol(av);
//	printf("val: %d\n", elem->val);
	elem->next = a->first;
	elem->prev = a->first->prev;
	if (a->first->next == a->first)
		a->first->next = elem;
	a->first->prev->next = elem;
	a->first->prev = elem;
	++a->size;
	return (0);
}

void	aff_stack(t_dlist *a, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", a->val);
		a = a->next;
		i++;
	}
}

int main(int ac, char **av)
{
	t_stack	a;
	t_stack b;
	int 	i;

	i = 2;
	check_errors(ac, av);
	init_stack(&a, &b);
	init_first(av, &a);
	while (i < ac)
	{
		insert_elem(av[i], &a);
//		printf("elem to insert: %s \n", av[i]);
		i++;
	}
//	a.first = a.first->next;
//	swap(&a, "sa");
//	rotate(&a,"ra");
	reverse_rotate(&a,"ra");
//	push(&a, &b, "pb");
	printf("stack a : \n");
//	printf("a first: %d | a first next: %d\n", a.first->val, a.first->next->val);
	aff_stack(a.first, a.size);
	printf("size : %d", a.size);
	printf("\nstack b : \n");
	aff_stack(b.first, b.size);
	return (0);
}
