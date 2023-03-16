/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   initialize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/16 12:56:51 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/16 15:58:08 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

// void	set_index(t_stack **head)
// {
// 	t_stack	*tmp;
// 	t_stack	*biggest;
// 	int		index;

// 	biggest = NULL;
// 	index = count_nodes(*head);
// 	while (index > 0)
// 	{
// 		tmp = *head;
// 		while (tmp)
// 		{
// 			if (!biggest || tmp->value > biggest->value)
// 				biggest = tmp;
// 			tmp = tmp->next;
// 		}
// 		biggest->index = index--;
// 		biggest = NULL;
// 	}
// }

void	set_index(t_stack *head)
{
	t_stack	*tmp;
	t_stack	*biggest;
	int		value;
	int		link_size;

	link_size = count_nodes(head);
	while (link_size-- > 0)
	{
		tmp = head;
		biggest = NULL;
		value = INT_MIN;
		while (tmp)
		{
			if (tmp->value == INT_MIN && tmp->index == 0)
				tmp->index = 1;
			else if (tmp->value > value && tmp->index == 0)
			{
				value = tmp->value;
				biggest = tmp;
				tmp = head;
			}
			else
				tmp = tmp->next;
		}
		if (biggest)
			biggest->index = link_size;
	}
}
