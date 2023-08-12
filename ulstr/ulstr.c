/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:36:34 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 19:41:29 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int modify_class(int c)
{
    if(c >= 'a' && c <= 'z')
        return(c - 32);
    else if(c >= 'A' && c <= 'Z')
        return(c + 32);
    else
        return(c);
}

void ft_putchar(int a)
{
    write(1, &a, 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        while(av[1][i])
        {
            ft_putchar(modify_class(av[1][i]));
            i++;
        }
    }
    write(1, "\n", 1);
}