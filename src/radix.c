/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/19 11:36:25 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/19 12:26:52 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix_sort(char **stack_a, char **stack_b)
{
	int	biggest_nbr;
	int	max_bits;
	int	i;
	int	j;

	biggest = find_biggest(*stack_a) - 1;
	max_bits = 0;
	i = 0;
	while ((biggest_nbr >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		while (j < biggest_nbr)
		{
			if ((stack_a->index >> i) & 1 == 1)
				rotate_a (stack_a);
			else
				push_b(stack_a. stack_b);
			j++;
		}
		while (stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}

