/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:20:57 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 14:10:53 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

char **ft_split(char *str)
{
    int i = 0;
    int j;
    char *start;
    int words = count_words(str);
    int word_len;
    char **result = (char **)malloc(sizeof(char *) * (words + 1));
    while(*str)
    {
        if(!is_space(*str))
        {
            word_len = 0;
            start = str;
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

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac < 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    else
    {
        char *str = av[1];
        int words = count_words(str);
        int i = 1;
        char **result = ft_split(str);
        while(i < words)
        {
            ft_putstr(result[i]);
            ft_putstr(" ");
            i++;
        }
        ft_putstr(result[0]);
        ft_putstr("\n");
        return(0);
    }
}

// int main()
// {
//     char *str = "  a vida e bela   ouviu  ";
//     int words = count_words(str);
//     int i = 0;
//     char **result = ft_split(str);
//     while(i < words)
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
// }