/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:18:14 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 18:27:00 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int a)
{
    write(1, &a, 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        while(str[i])
        {
            if((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
                ft_putchar(str[i] + 13);
            else if((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
                ft_putchar(str[i] - 13);
            else
                ft_putchar(str[i]);
            i++;
        }
    }
    ft_putchar('\n');
}