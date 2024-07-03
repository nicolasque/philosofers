/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 08:38:19 by nquecedo          #+#    #+#             */
/*   Updated: 2024/07/03 08:54:22 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdbool.h>

bool    ft_chek_args(int argc, char **argv)
{
    if (argc < 4)
    {
        ft_printf("Error: wrong argument number.\n");
        return (exit(-1), false);
    }
}

int main(int argc, char *argv[])
{

}