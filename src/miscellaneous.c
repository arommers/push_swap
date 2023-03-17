/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   miscellaneous.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/16 10:41:44 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/17 14:26:09 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_msg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
	exit (0);
}

int	check_list(t_stack **head)
{
	t_stack	*tmp;

	tmp = *head;
	while (tmp && tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
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
