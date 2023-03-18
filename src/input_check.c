/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adri <adri@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/18 22:41:09 by adri          #+#    #+#                 */
/*   Updated: 2023/03/18 22:52:22 by adri          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int check_doubles(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    while (i < argc)
    {
        j = i + 1;
        while (j < argc)
        {
            if (atoi(argv[i]) == atoi(argv[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}