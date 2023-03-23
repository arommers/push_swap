/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_util.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 15:49:39 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/23 16:17:45 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(t_stack *head)
{
	int		big;
	t_stack	*tmp;

	big = INT_MIN;
	tmp = head;
	while (tmp)
	{
		if (tmp->index > big)
			big = tmp->index;
		tmp = tmp->next;
	}
	return (big);
}

int	find_bits(int biggest_nbr)
{
	int	max_bits;

	max_bits = 0;
	while (biggest_nbr > 0)
	{
		biggest_nbr >>= 1;
		max_bits++;
	}
	return (max_bits);
}
