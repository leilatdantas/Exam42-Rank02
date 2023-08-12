/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:44:09 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 19:57:19 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int max = tab[i];
    while(i < len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return(max);
}