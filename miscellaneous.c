/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   miscellaneous.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/16 10:41:44 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/16 11:11:46 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

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
	t_stack	tmp;

	tmp = *head;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}
