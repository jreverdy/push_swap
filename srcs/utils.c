/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:50:56 by jereverd          #+#    #+#             */
/*   Updated: 2022/03/02 18:50:59 by jereverd         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_bubble_sort(int *tab, int size)
{
	int tmp;
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
		}
		else
			i++;
	}
}
