/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:09:24 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/02 13:57:31 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int a)
{
    write(1, &a, 1);
}

int main (int argc, char **argv)
{
    int i;
    
    i = 0;
    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                ft_putchar('_');
                ft_putchar(argv[1][i] + 32);
            }
            else
                ft_putchar(argv[1][i]);
            i++;
        }
    }
    write(1, "\n", 1);
}