/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_util3.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/26 13:06:11 by adri          #+#    #+#                 */
/*   Updated: 2023/03/26 15:03:48 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_doubles(char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = count_arg(argv);
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_nbr(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_input(int argc, char **argv)
{
	int		i;
	long	tmp_argv;
	char	**tmp_array;

	i = 0;
	if (argc == 2)
		tmp_array = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		tmp_array = argv + 1;
	}
	while (tmp_array[i])
	{
		tmp_argv = ft_atoi(tmp_array[i]);
		if (tmp_argv < INT_MIN || tmp_argv > INT_MAX)
			error_msg("ERROR");
		if (check_doubles(tmp_array))
			error_msg("ERROR");
		if (!check_nbr(tmp_array[i]))
			error_msg("ERROR");
		i++;
	}
	if (argc == 2)
		ft_free (tmp_array);
}
