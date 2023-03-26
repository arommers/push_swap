/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_util5.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/26 22:15:40 by adri          #+#    #+#                 */
/*   Updated: 2023/03/26 22:20:29 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_cw(stack_a);
	rotate_cw(stack_b);
}

void	r_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate_ccw(stack_a);
	rotate_ccw(stack_b);
}