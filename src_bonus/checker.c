/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 13:53:52 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/25 16:55:33 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_input(char *input, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strcmp(input, "sa\n") == 0)
		swap(stack_a);
	else if (ft_strcmp(input, "pa\n") == 0)
		push(stack_a, stack_b);
	else if (ft_strcmp(input, "ra\n") == 0)
		rotate_cw(stack_a);
	else if (ft_strcmp(input, "rra\n") == 0)
		rotate_ccw(stack_a);
	else if (ft_strcmp(input, "pb\n") == 0)
		push(stack_b, stack_a);
	else
	{
		free(input);
		return (0);
	}
	free(input);
	return (1);
}

void	read_input(t_stack **stack_a, t_stack **stack_b)
{
	char	*buf;

	buf = get_next_line(0);
	while (buf)
	{
		if (!check_input(buf, stack_a, stack_b))
			write(1, "ERROR\n", 6);
		buf = get_next_line;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	check_input(argc, argv);
	stack_a = init_list(argc, argv);
	stack_b = NULL;
	read_input(stack_a, stack_b);
	if (sorted(stack_a) && !stack_a)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
