/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   r_rotate.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/14 16:15:47 by adri          #+#    #+#                 */
/*   Updated: 2023/03/16 14:01:58 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	rotate_ccw(t_stack **head)
{
	t_stack	*prev_tail;
	t_stack	*new_tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	prev_tail = *head;
	while (prev_tail->next != NULL)
	{
		new_tail = prev_tail;
		prev_tail = prev_tail->next;
	}
	prev_tail->next = *head;
	new_tail->next = NULL;
	*head = prev_tail;
}

void	r_rotate_a(t_stack **head)
{
	rotate_ccw(head);
	write(1, "rra\n", 4);
}

void	r_rotate_b(t_stack **head)
{
	rotate_ccw(head);
	write(1, "rrb\n", 4);
}

void	r_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_ccw(stack_a);
	rotate_ccw(stack_b);
	write(1, "rrr\n", 4);
}
