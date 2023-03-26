/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/25 16:44:42 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/26 15:02:55 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"

typedef struct s_stack {
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		count_arg(char **array);
int		check_doubles(char **argv);
int		check_nbr(char *argv);
int		sorted(t_stack **head);
int		check_move(char *input, t_stack **stack_a, t_stack **stack_b);
void	error_msg(char *str);
void	read_input(t_stack **stack_a, t_stack **stack_b);
void	swap(t_stack **head);
void	rotate_cw(t_stack **head);
void	rotate_ccw(t_stack **head);
void	push(t_stack **stack_from, t_stack **stack_to);
void	insert_at_tail(t_stack **head, int new_value);
void	free_stack(t_stack **head);
void	check_input(int argc, char **argv);
void	set_index(t_stack *head, int link_size);
int		count_nodes(t_stack *head);
t_stack	*init_list(int argc, char **argv);
t_stack	*make_new_node(int new_value);

#endif
