/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:54:46 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/02 19:53:47 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>

int ft_countsize(long nbr)
{
    int i = 0;
    if (nbr == 0)
        return(1);
    if (nbr < 0)
    {
        nbr = -nbr;
        i++;
    }
    while(nbr > 0)
    {
        i++;
        nbr/=10;
    }
    return(i);
}

char    *ft_itoa(int nbr)
{
    int len;
    char *str;
    int i;
    long n;
    
    n = nbr;
    len = ft_countsize(n);
    str = malloc(sizeof(char) * len + 1);
    if(!str)
        return(NULL);
    i = 0;
    if(n < 0)
    {
        str[0] = '-';
        i++;
        n = -n;
    }
    str[len] = '\0';
    len--;
    while(len >= i)
    {
        str[len] = n % 10 + '0';
        n = n/10;
        len--;
    }
    return(str);
}

/*int main()
{
    char *str;
    
    str = ft_itoa(INT_MIN);
    printf("Essa é a string: %s", str);
}*/