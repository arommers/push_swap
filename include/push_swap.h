/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/27 14:49:24 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/12 14:03:14 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack {
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

t_stack	*init_list(int argc, char **argv);

// linked list functions

void	print_list(t_stack *head);
void	insert_at_tail(t_stack **head, int new_value);
t_stack	*insert_new_node(int new_value);

// sort functions

t_stack	*sort(t_stack *head);

#endif
