/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/27 12:33:01 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/12 15:13:41 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

t_stack	*init_list(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;

	i = 1;
	while (argv[i])
	{
		if (i == 1)
			stack_a = insert_new_node(atoi(argv[i]));
		else
			insert_at_tail(&stack_a, atoi(argv[i]));
		i++;
	}
	return (stack_a);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	// stack_a = NULL;
	if (argc < 2)
		return (0);
	stack_a = init_list(argc, argv);
	// stack_b = NULL;
	print_list(stack_a);
	sort(stack_a);
	print_list(stack_a);
	sort(stack_a);
	print_list(stack_a);
	return (0);
}
