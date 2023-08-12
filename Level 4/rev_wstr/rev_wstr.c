/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:02:20 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 15:44:26 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int ft_isspace(int a)
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
        while(ft_isspace(str[i]) && str[i])
            i++;
        if(!ft_isspace(str[i]) && str[i])
        {
            words++;
            while(!ft_isspace(str[i]) && str[i])
                i++;
        }
    }
    return(words);
}

char **ft_split(char *str)
{
    int words = count_words(str);
    int i = 0;
    int j;
    int word_len;
    char *start;
    char **result = (char **)malloc(sizeof(char*) * (words + 1));
    if(!result)
        return(NULL);
    while(*str)
    {
        if(!ft_isspace(*str))
        {
            start = str;
            word_len = 0;
            while(!ft_isspace(*str) && *str)
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
    if(ac == 2)
    {
        char *str = av[1];
        char **result = ft_split(str);
        int words = count_words(str) - 1;
        while(words >= 1)
        {
            ft_putstr(result[words]);
            ft_putstr(" ");
            words--;
        }
        ft_putstr(result[0]);
    }
    ft_putstr("\n");
    return(0);
}