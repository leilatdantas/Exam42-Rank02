/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:33:28 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 15:01:09 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(char *str)
{
    int i = 0;
    int result = 0;
    while(str[i])
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return(result);
}

void ft_putchar(int a)
{
    write(1, &a, 1);
}

void putnbr(int nbr)
{
    if(nbr >= 10)
        putnbr(nbr/10);
    ft_putchar(nbr%10 + '0');
}

int ft_isprime(int nbr)
{
    int i = 2;
    if(nbr <= 1)
        return(0);
    while(i * i <= nbr)
    {
        if(nbr%i == 0)
            return(0);
        i++;
    }
    return(1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int nbr = atoi(av[1]);
        int i = 1;
        int result = 0;
        while(i <= nbr)
        {
            if(ft_isprime(i))
                result = result + i;
            i++;
        }
        putnbr(result);
        ft_putchar('\n');
    }
    else
    {
        ft_putchar('0');
        ft_putchar('\n');
    }
    return(0);
}