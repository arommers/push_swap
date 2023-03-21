/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 11:56:05 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/21 12:31:08 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	ft_isalpha(int c);

int	main(void)
{
	int i;

	i = 1;
	printf("%d\n", ft_isalpha(i));
	printf("%d\n", isalpha(i));
	return (0);
}*/