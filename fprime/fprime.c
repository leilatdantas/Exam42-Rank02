/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:03:41 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 18:11:19 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int prime = 2;
        int nbr = atoi(av[1]);
        if(nbr == 1)
            printf("1");
        else
        {
            while(nbr/prime >= 1)
            {
                if(nbr%prime == 0)
                {
                    printf("%d", prime);
                    nbr = nbr/prime;
                    if(nbr != 1)
                        printf("*");
                    prime--;
                }
                prime++;
            }
        }
    }
    printf("\n");
}