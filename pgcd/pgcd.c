/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:13:48 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 13:19:52 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac != 3)
    {
        printf("\n");
        return(0);
    }
    int x = atoi(av[1]);
    int y = atoi(av[2]);
    while(x != y)
    {
        if(x > y)
            x = x - y;
        else
            y = y - x;
    }
    printf("%d", x);
    printf("\n");
    return(0);
}