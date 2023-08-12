/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:09:15 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 21:27:13 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(int a)
{
    if(a == ' ' || (a >= 9 && a <= 13))
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    int i = 0;
    int len = 0;
    if(ac != 2)
        write(1, "\n", 1);
    else
    {
        while(av[1][len])
            len++;
        while(is_space(av[1][len]) || av[1][len] == '\0')
        {
            len--;
        }
        i = 0;
        while(av[1][i] && i <= len)
        {
            while(is_space(av[1][i]) && av[1][i])
                i++;
            if(!is_space(av[1][i]) && i <= len)
            {
                while(!is_space(av[1][i]) && i <= len)
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
                if(is_space(av[1][i]) && i <= len)
                {
                    write(1, "   ", 3);
                    while(is_space(av[1][i]) && i <= len)
                        i++;
                }
            } 
        }
        write(1, "\n", 1);
    }
}