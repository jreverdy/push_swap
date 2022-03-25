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

//void	init_stack(t_stack *a, t_stack *b, int ac, char **av)
//{
//	int i;
//	int j;
//
//	i = 0;
//	j = 1;
//	a->size = ac - 1;
//	b->size = 0;
//	a->tab = ft_calloc(a->size, sizeof(int));
//	b->tab = ft_calloc(b->size, sizeof(int));
//	while (j < ac)
//	{
//		a->tab[i] = ft_atoi(av[j]);
//		i++;
//		j++;
//	}
//}

//t_dlist	*init_root(void)
//{
//	t_dlist	*racine;
//
//	racine = malloc(sizeof (*racine));
//	if (!racine)
//		return (NULL);
//	if (racine)
//	{
//		racine->prec = racine;
//		racine->next = racine;
//	}
//	return(racine);
//}

int	init_first(char **av, t_stack *a)
{
	t_dlist *new;


	new = malloc(sizeof(t_dlist));
	if (!new)
		return (-1);
	a->size = 1;
	a->first = new;
	new->val = ft_atol(av[1]);
	new->prev = NULL;
	new->next = NULL;
	return (0);
}

int	insert_elem(char *av, t_stack *a)
{
	t_dlist *elem;

	elem = malloc(sizeof(t_dlist));
	if (!elem)
		return (-1);
	elem->val = ft_atol(av);
	elem->next = a->first;
	elem->prev = a->first->prev;
	a->first->prev = elem;
	a->first->prev->next = elem;
	printf("4\n");
	return (0);
}
  
int main(int ac, char **av)
{
	t_stack	a;
//	t_stack b;
	int 	i;

	i = 2;
	printf("oui\n");
	check_errors(ac, av);
	init_first(av, &a);
	printf("1\n");
	while (av[i++])
		insert_elem(av[i], &a);
	printf("2\n");
//	init_stack(&a, &b, ac, av);
	return (0);
}
