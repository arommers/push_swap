/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 09:54:48 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/21 12:30:51 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "jovanka";

	printf("%s\n", ft_bzero(str, 5));
	printf("%s\n", bzero(str, 5));
	return(0);
}*/
