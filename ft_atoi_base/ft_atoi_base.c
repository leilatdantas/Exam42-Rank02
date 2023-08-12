/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:40:41 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 18:02:29 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int to_lower(int a)
{
    if(a >= 'A' && a <= 'Z')
        return(a + 32);
    return(a);
}

int get_digit(char c, int base)
{
    int max;
    if(base <= 10)
        max = base + '0';
    else
        max = base - 10 + 'a';
    if(c >= '0' && c <= '9' && c <= max)
        c = c - '0';
    else if(c >= 'a' && c <= 'f' && c <= max)
        c = c - 'a' + 10;
    else
        return (-1);
    return(c);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int digit; 

    if(*str == '-')
    {
        sign = -sign;
        str++;
    }
    while((digit = get_digit(to_lower(*str), str_base)) >= 0)
    {
        result = result * str_base + (digit * sign);
        str++;
    }
    return(result);
}

// int main()
// {
//     char *str = "-80000000";
//     int nbr = ft_atoi_base(str, 16);
//     printf("%d", nbr);
// }