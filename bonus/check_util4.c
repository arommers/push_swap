/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_util4.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/26 13:28:51 by adri          #+#    #+#                 */
/*   Updated: 2023/03/27 09:40:51 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	count_arg(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

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
