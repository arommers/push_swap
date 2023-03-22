/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/27 12:33:01 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/22 19:58:41 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*init_list(int argc, char **argv)
{
	t_stack	*stack_a;
	char	**tmp;
	int		i;

	i = 0;
	if (argc == 2)
	{
		tmp = ft_split(argv[1], ' ');
		i = -1;
	}
	else
		tmp = argv;
	while (argv[++i])
	{
		if (i == 0)
			stack_a = make_new_node(ft_atoi(tmp[i]));
		else
			insert_at_tail(&stack_a, ft_atoi(tmp[i]));
		i++;
	}
	if (argc == 2)
		ft_free(tmp);
	return (stack_a);
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
	sort_stack(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
