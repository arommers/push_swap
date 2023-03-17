/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/27 12:33:01 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/17 16:18:57 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*init_list(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;

	i = 1;
	if (!argc)
		exit (0);
	while (argv[i])
	{
		if (i == 1)
			stack_a = make_new_node(atoi(argv[i]));
		else
			insert_at_tail(&stack_a, atoi(argv[i]));
		i++;
	}
	return (stack_a);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	stack_a = init_list(argc, argv);
	stack_b = NULL;
	set_index(stack_a, count_nodes(stack_a));
	print_list(stack_a);
	
	// rotate_a(&stack_a);
	// rotate_a(&stack_a);
	// r_rotate_a(&stack_a);
	sort_three(&stack_a);
	print_list(stack_a);
	// print_list(stack_b);
	// push_b(&stack_a, &stack_b);
	// push_b(&stack_a, &stack_b);
	// push_b(&stack_a, &stack_b);
	// print_list(stack_a);
	// print_list(stack_b);
	// r_rotate_ab(&stack_a, &stack_b);
	// print_list(stack_a);
	// print_list(stack_b);
	// printf("list size : %d\n", count_nodes(stack_a));
	// printf("list size : %d\n", count_nodes(stack_b));
	return (0);
}
