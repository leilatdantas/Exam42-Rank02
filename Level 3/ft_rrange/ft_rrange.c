/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:14:26 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/12 15:59:28 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int absolute(int start, int end)
{
    int result = end - start; 
    if(result < 0)
        result = -result;
    return(result);
}

int     *ft_rrange(int start, int end)
{
    int range = absolute(start, end) + 1;
    int *nbrs;
    nbrs = (int *)malloc(sizeof(int) * range);
    int i = 0;
    while(i < range)
    {
        if(start > end)
        {
            nbrs[i] = end;
            end++;
            i++;
        }
        else
        {
            nbrs[i] = end;
            end--;
            i++;
        }
    }
    return(nbrs);
}

// int main()
// {
//     int start = 3;
//     int end = 1;
//     int *nbrs = ft_rrange(start, end);
//     int i = 0;
//     while(i <= absolute(start, end))
//     {
//         printf("Numero %d: %d\n", i, nbrs[i]);
//         i++;
//     }
//     return(0);
// }