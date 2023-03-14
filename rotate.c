/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 14:49:44 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/14 11:05:47 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	rotate_cw(t_stack **head)
{
	t_stack	*tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = *head;
	*head = (*head)->next;
	tail->next->next = NULL;
}

void	rotate_a(t_stack **head)
{
	rotate_cw(head);
	write (1, "ra\n", 1);
}

void	rotate_b(t_stack **head)
{
	rotate_cw(head);
	write (1, "rb\n", 1);
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_cw(stack_a);
	rotate_cw(stack_b);
	write(1, "rr\n", 3);
}

void	rotate_ccw(t_stack **head)
{
	t_stack	*og_tail;
	t_stack	*new_tail;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	og_tail = *head;
	while (og_tail->next != NULL)
	{
		new_tail = og_tail;
		og_tail = og_tail->next;
	}
	og_tail->next = *head;
	new_tail->next = NULL;
	*head = og_tail;
}
