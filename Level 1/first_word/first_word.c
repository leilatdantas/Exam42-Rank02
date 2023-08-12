/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:52:07 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 16:01:37 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_isspace(int a)
{
    if(a == ' ' || (a <= 9 && a >=13))
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        int flg = 0;
        if(str[i])
        {
            while (ft_isspace(str[i]) && str[i] && !flg)
                i++;
            if(!ft_isspace(str[i]) && str[i] && !flg)
            {
                while(!ft_isspace(str[i]) && str[i])
                {
                    write(1, &str[i], 1);
                    i++;
                    flg = 1;
                }
            }
        }
    }
    write(1, "\n", 1);
}
