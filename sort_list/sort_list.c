/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebarbos <lebarbos@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:44:42 by lebarbos          #+#    #+#             */
/*   Updated: 2023/08/10 19:08:05 by lebarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tmp = lst;
    int swap;

    while(lst->next)
    {
        if((*cmp)(lst->data, lst->next->data) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return(lst);
}
