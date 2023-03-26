/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 13:53:52 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/26 22:20:06 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_move(char *input, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strcmp(input, "sa\n") == 0)
		swap(stack_a);
	else if (ft_strcmp(input, "sb\n") == 0)
		swap(stack_b);
	else if (ft_strcmp(input, "ss\n") == 0)
		swap_ab(stack_a, stack_b);
	else if (ft_strcmp(input, "pa\n") == 0)
		push(stack_b, stack_a);
	else if (ft_strcmp(input, "pb\n") == 0)
		push(stack_a, stack_b);
	else if (ft_strcmp(input, "ra\n") == 0)
		rotate_cw(stack_a);
	else if (ft_strcmp(input, "rb\n") == 0)
		rotate_cw(stack_b);
	else if (ft_strcmp(input, "rr\n") == 0)
		rotate_ab(stack_a, stack_b);
	else if (ft_strcmp(input, "rra\n") == 0)
		rotate_ccw(stack_a);
	else if (ft_strcmp(input, "rrb\n") == 0)
		rotate_ccw(stack_b);
	else if (ft_strcmp(input, "rrr\n") == 0)
		rotate_ab(stack_a, stack_b);
	else
		return (0);
	return (1);
}

void	read_input(t_stack **stack_a, t_stack **stack_b)
{
	char	*buf;

	buf = get_next_line(0);
	while (buf)
	{
		if (!check_move(buf, stack_a, stack_b))
			error_msg("ERROR");
		free (buf);
		buf = get_next_line(0);
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
	set_index(stack_a, count_nodes(stack_a));
	read_input(&stack_a, &stack_b);
	if (sorted(&stack_a) && !stack_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
