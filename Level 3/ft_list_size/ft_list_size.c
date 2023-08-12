/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:51:18 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 20:52:48 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


int	ft_list_size(t_list *begin_list)
{
    t_list *tmp;
    tmp = begin_list;
    int i = 0;
    while(tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return(i);
}