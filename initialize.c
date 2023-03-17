/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   initialize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/16 12:56:51 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/17 10:28:51 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	set_index(t_stack *head, int link_size)
{
	t_stack	*biggest;
	t_stack	*tmp;

	while (link_size-- > 0)
	{
		biggest = NULL;
		tmp = head;
		while (tmp)
		{
			if (!tmp->index && (biggest == NULL
					|| tmp->value > biggest->value))
				biggest = tmp;
			tmp = tmp->next;
		}
		if (biggest)
			biggest->index = link_size;
	}
}
