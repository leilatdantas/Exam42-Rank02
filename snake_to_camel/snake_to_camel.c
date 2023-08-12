/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:09:46 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 17:18:38 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int is_space(int a)
// {
//     if(a == ' ' || (a <= 9 && a >= 13))
//         return(1);
//     return(0);
// }

int to_upper(int a)
{
    if(a >= 'a' && a <= 'z')
        a = a - 32;
    return(a);
}

void ft_putchar(int a)
{
    write(1, &a, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        char *str = av[1];
        while(str[i])
        {
            if(str[i] && str[i] == '_')
            {
                i++;
                str[i] = to_upper(str[i]);
                ft_putchar(str[i]);
            }
            else
                ft_putchar(str[i]);
            i++;
        }
    }
    ft_putchar('\n');
}