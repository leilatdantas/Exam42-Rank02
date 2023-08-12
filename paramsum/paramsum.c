/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:35:47 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 18:42:26 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;
    int i = 0;
    while(str[i])
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result);
}

void ft_putchar(int a)
{
    write(1, &a, 1);
}

void ft_putnbr(int nbr)
{
    if(nbr >= 10)
        ft_putnbr(nbr/10);
    ft_putchar(nbr%10 + '0');
}

int main(int ac, char **av)
{
    (void)av;
    if(ac >= 1)
    {
        int nbr = ac - 1;
        ft_putnbr(nbr);
    }
    ft_putchar('\n');
}