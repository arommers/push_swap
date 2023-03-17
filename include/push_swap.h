/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/27 14:49:24 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/17 09:59:10 by arommers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack {
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

// initialisation
t_stack	*init_list(int argc, char **argv);
void	set_index(t_stack *head, int list_size);

// linked list functions

int		count_nodes(t_stack *head);
void	print_list(t_stack *head);
void	insert_at_tail(t_stack **head, int new_value);
t_stack	*make_new_node(int new_value);

// instructions

void	swap(t_stack **head);
void	swap_a(t_stack **head);
void	swap_b(t_stack **head);
void	swap_ab(t_stack **stack_a, t_stack **stack_b);
void	push(t_stack **stack_from, t_stack **stack_to);
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_cw(t_stack **head);
void	rotate_a(t_stack **head);
void	rotate_b(t_stack **head);
void	rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	rotate_ccw(t_stack **head);
void	r_rotate_a(t_stack **head);
void	r_rotate_b(t_stack **head);
void	r_rotate_ab(t_stack **stack_a, t_stack **stack_b);

// miscellaneous

int		check_list(t_stack **head);
void	error_msg(char *str);
void	free_stack(t_stack **head);

#endif