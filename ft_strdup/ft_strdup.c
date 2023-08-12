/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:29:12 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 18:34:42 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int j = 0;
    char *dst;
    while(src[i])
        i++;
    dst = (char *)malloc(sizeof(char) * i + 1);
    if(!dst)
        return(NULL);
    while(src[j])
    {
        dst[j] = src[j];
        j++;
    }
    dst[i] = '\0';
    return(dst);
}

// int main()
// {
//     char *src = "para copiar";
//     char *dst = ft_strdup(src);
//     printf("fonte: %s\ncopia: %s\n", src, dst);
// }