/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/12 09:12:55 by adri          #+#    #+#                 */
/*   Updated: 2023/03/13 14:59:17 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	sort(t_stack *head)
{
	t_stack	*next_node;
	int		tmp_value;
	int		tmp_index;

	if (!head || !head->next)
		return ;
	next_node = head->next;
	tmp_value = head->value;
	tmp_index = head->index;
	head->value = next_node->value;
	head->index = next_node->index;
	next_node->value = tmp_value;
	next_node->index = tmp_index;
}
