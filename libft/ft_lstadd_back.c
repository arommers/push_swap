/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: arommers <arommers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 11:21:43 by arommers      #+#    #+#                 */
/*   Updated: 2023/03/21 12:31:31 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*placeholder;

	if (lst || new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			placeholder = *lst;
			while (placeholder->next != NULL)
				placeholder = placeholder->next;
			placeholder->next = new;
		}
	}
}
