/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:58:30 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 20:18:58 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int i = 0;
    if(a > b)
        i = a;
    else
        i = b;
    while(a && b)
    {
        if(i % a == 0 && i % b == 0)
            return(i);
        i++;
    }
    return(0);
}

// int main()
// {
//     unsigned int a = 0;
//     unsigned int b = 6;
//     unsigned int number = lcm(a, b);
//     printf("LCM: %d\n", number);
// }