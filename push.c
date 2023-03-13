/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/13 11:33:46 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/13 16:15:02 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

void	push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (stack_b == NULL)
		*stack_b = tmp;
	else
	{
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
}
