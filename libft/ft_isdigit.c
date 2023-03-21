/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:22:22 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/21 12:31:19 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	ft_isdigit(int c);

int	main(void)
{
	int i;

	i = 'A';
	printf("%d\n", ft_isdigit(i));
	printf("%d\n", isdigit(i));
	return (0);
}*/