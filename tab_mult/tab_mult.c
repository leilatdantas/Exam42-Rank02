/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:00:15 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/07 23:20:07 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int a)
{
    write(1, &a, 1);
}

int ft_atoi(char *str)
{
    int result; 
    int sign;
    int i;
    
    sign = 1;
    result = 0;
    i = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i ++;
    if(str[i] == '-')
        sign = -sign;
    if(str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return(result * sign);
}

void putnbr(long int nb)
{
    if(nb < 0)
    {
        ft_putchar('-');
        putnbr(-nb);
    }
    else if(nb > 9)
    {
        putnbr(nb/10);
        putnbr(nb%10);
    }
    else
        ft_putchar(nb + '0');
}


int main(int ac, char **av)
{
    int i = 1;
    int nbr;
    
    if(ac != 2)
        write(1, "\n", 1);
    if(ac == 2)
    {
        nbr = ft_atoi(av[1]);
        while(i <= 9)
        {
            ft_putchar(i + '0');
            write(1, " x ", 3);
            putnbr(nbr);
            write(1, " = ", 3);
            putnbr(nbr * i);
            ft_putchar('\n');
            i++;
        }
    }
}