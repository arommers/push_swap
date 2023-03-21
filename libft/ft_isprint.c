/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 14:39:31 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/21 12:31:23 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	ft_isprint(int c);

int	main(void)
{
	int	i;

	i = 55;
	printf("%d\n", ft_isprint(i));
	printf("%d\n", isprint(i));
	return (0);
}
*/