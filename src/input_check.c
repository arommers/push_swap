/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/19 11:14:39 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/21 15:32:05 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_doubles(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	check_input(int argc, char **argv)
{
	int		i;
	int		tmp_argv;
	char	**tmp_array;

	i = 0;
	if (argc == 2)
		ft_split(argv[1], ' ');
	else
		tmp_array = argv + 1;
	while (tmp_array[i])
	{
		tmp_argv = ft_atoi(tmp_array[i]);
		if (tmp_argv < INT_MIN || tmp_argv > INT_MAX)
			error_msg("ERROR");
		if (check_doubles(argc, tmp_array))
			error_msg("ERROR");
		if (!check_nbr())
			error_msg("ERROR");
		i++;
	}
	ft_free (tmp_array);
}