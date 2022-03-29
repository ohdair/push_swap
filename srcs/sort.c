/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewpark <jaewpark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:28:49 by jaewpark          #+#    #+#             */
/*   Updated: 2022/03/29 12:03:53 by jaewpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_pushswap *t)
{
	int		size;
	int		i;

	size = t->a->size;
	i = -1;
	while (++i < size)
	{
		if (t->a->head->index != t->lis)
		{
			call_utils(t, "pb");
			if (size > 100 && t->b->head->data >= t->mid)
				call_utils(t, "rb");
		}
		else
		{
			call_utils(t, "ra");
			t->lis--;
		}
	}
}