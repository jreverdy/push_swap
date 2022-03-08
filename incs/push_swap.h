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

typedef struct	s_list
{
	int		val;
	struct s_list	*prec;
	struct s_list	*next;
}t_list;

typedef struct	s_stack
{
	int size;
	int	*tab;
}t_stack;


int		main(int ac , char **av);
int		check_errors(int ac, char **av);

#endif
