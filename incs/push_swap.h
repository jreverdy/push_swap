/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:48:41 by jereverd          #+#    #+#             */
/*   Updated: 2022/02/08 13:48:43 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"
# include "../ft_printf/incs/ft_printf.h"

typedef struct	s_dlist
{
	int				val;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}t_dlist;

typedef struct	s_stack
{
	struct s_dlist	*first;
	int 			size;
}t_stack;


int		main(int ac , char **av);
int		check_errors(int ac, char **av);
int		stack_size(t_stack *list);
void	push(t_stack *a, t_stack *b, char *to_write);
void	rotate(t_stack *stack, char *to_write);
void	reverse_rotate(t_stack *stack, char *to_write);

#endif
