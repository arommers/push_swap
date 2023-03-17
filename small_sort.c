/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   small_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/17 11:35:24 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/17 12:01:27 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	find_biggest(t_stack **head)
{
	int		big;
	t_stack	*tmp;

	big = INT_MIN;
	tmp = *head;
	while (tmp)
	{
		if (tmp->index > big)
			big = tmp->index;
		tmp = tmp->next;
	}
	return (big);
}
