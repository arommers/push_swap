/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   linked_list.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/27 15:11:54 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/16 15:39:19 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

int	count_nodes(t_stack *head)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}

void	print_list(t_stack *head)
{
	t_stack	*current;
	int		i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		printf("node: %d: %d	index: %d\n", i, current->value, current->index);
		i++;
		current = current->next;
	}
}

t_stack	*make_new_node(int new_value)
{
	t_stack	*new_node;

	new_node = calloc(1, sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = new_value;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}

void	insert_at_tail(t_stack **head, int new_value)
{
	t_stack	*new_node;
	t_stack	*current;

	current = *head;
	while (current->next != NULL)
		current = current->next;
	new_node = calloc(1, sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = new_value;
	new_node->index = 0;
	new_node->next = NULL;
	current->next = new_node;
}
