/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:32:56 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 13:12:41 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char a)
{
    int i = 0;
    while(s1[i])
    {
        if(s1[i] == a)
            return(1);
        i++;
    }
    return(0);
}

int ft_repeat(char *s1, char a, int size)
{
    int i = 0;
    while(s1[i] && i < size)
    {
        if(s1[i] == a)
            return(1);
        i++;
    }
    return(0);
}

int main(int ac, char **av)
{

    if(ac != 3)
    {
        write(1, "\n", 1);
        return(0);
    }
    char *s1 = av[1];
    char *s2 = av[2];
    int len1 = 0;

    while(s1[len1])
    {
        if(ft_strcmp(s2, s1[len1]) && !ft_repeat(s1, s1[len1], len1))
            write(1, &s1[len1], 1);
        len1++;
    }
    write(1, "\n", 1);
    return(0);
}