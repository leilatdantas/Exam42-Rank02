/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:43:58 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 20:49:21 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int a)
{
    write(1, &a, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = 'z' - av[1][i] + 'a';
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = 'Z' - av[1][i] + 'A';
            ft_putchar(av[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
}