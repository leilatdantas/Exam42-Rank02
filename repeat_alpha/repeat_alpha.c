/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:16:35 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 14:28:24 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int repeat(int a)
{
    if(a >= 'a' && a <= 'z')
        return(a - 'a');
    else if(a >= 'A' && a <= 'Z')
        return(a - 'A');
    return(0);
}

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        char *str = av[1];
        while(str[i])
        {
            int x = repeat(str[i]);
            while(x > 0)
            {
                write(1, &str[i], 1);
                x--;
            }
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}