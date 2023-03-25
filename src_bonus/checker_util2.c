/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker_util2.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 16:57:02 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/25 17:00:21 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack	*init_list(int argc, char **argv)
{
	t_stack	*stack_a;
	char	**tmp;
	int		i;

	stack_a = NULL;
	i = 0;
	if (argc == 2)
		tmp = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		tmp = argv;
	}
	while (tmp[i])
	{
		insert_at_tail(&stack_a, ft_atoi(tmp[i]));
		i++;
	}
	if (argc == 2)
		ft_free(tmp);
	return (stack_a);
}

void	insert_at_tail(t_stack **head, int new_value)
{
	t_stack	*new_node;
	t_stack	*current;

	if (*head == NULL)
	{
		*head = make_new_node(new_value);
		return ;
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	new_node = make_new_node(new_value);
	current->next = new_node;
}

t_stack	*make_new_node(int new_value)
{
	t_stack	*new_node;

	new_node = calloc(1, sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = new_value;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}

void	free_stack(t_stack **head)
{
	t_stack	*tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
