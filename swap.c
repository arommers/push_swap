/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/12 09:12:55 by adri          #+#    #+#                 */
/*   Updated: 2023/03/14 10:09:20 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	swap(t_stack **head)
{
	t_stack	*tmp;

	if (!*head || (*head)->next == NULL)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}

void    swap_a(t_stack **head)
{
    swap(head);
    write(1, "sa\n", 3);
}
void    swap_b(t_stack **head)
{
    swap(head);
    write(1, "sb\n", 3);
}

void    swap_ab(t_stack **stack_a, t_stack **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    write(1, "ss\n", 3);
}