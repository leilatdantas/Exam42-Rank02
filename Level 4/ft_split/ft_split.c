/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:42:07 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 17:04:17 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_space(int a)
{
    if(a == ' ' || (a >= 9 && a <= 13))
        return(1);
    return(0);
}

int count_words(char *str)
{
    int i = 0;
    int words = 0;
    while(str[i])
    {
        while(is_space(str[i]) && str[i])
            i++;
        if(!is_space(str[i]) && str[i])
        {
            words++;
            while(!is_space(str[i]) && str[i])
                i++;
        }
    }
    return(words);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j;
    char *start; 
    int words = count_words(str);
    int word_len;
    char **result = (char **)malloc(sizeof(char *) * words + 1);
    if(!result)
        return(NULL);
    while(*str)
    {
        if(!is_space(*str) && *str)
        {
            start = str;
            word_len = 0;
            while(*str && !is_space(*str))
            {
                word_len++;
                str++;
            }
            result[i] = (char *)malloc(sizeof(char) * word_len + 1);
            if(!result[i])
            {
                while(i > 0)
                {
                    free(result[i]);
                    i--;
                }
                result[0] = NULL;
                return(result);
            }
            j = 0;
            while(j < word_len)
            {
                result[i][j] = start[j];
                j++;
            }
            result[i][word_len] = '\0';
            i++;
        }
        else
            str++;
    }
    result[words] = NULL;
    return(result);
}

// int main()
// {
//     char *str = "divida essas palavras";
//     char **result = ft_split(str);
//     int i = 0;
//     while(result[i])
//     {
//         printf("Palavra %d: %s\n", i, result[i]);
//         i++;
//     }
//     return(0);
// }