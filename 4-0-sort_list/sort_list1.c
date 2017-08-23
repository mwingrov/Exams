/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 10:58:41 by exam              #+#    #+#             */
/*   Updated: 2015/03/05 11:40:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		overflow;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			overflow = lst->data;
			lst->data = lst->next->data;
			lst->next->data = overflow;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *head;
    t_list *comp;
    
    head = lst;
    while (lst)
    {
        comp = lst->next;
        while (comp)
        {
            if (!(*comp)(lst->data, comp->data))
            {
                ft_swap(&lst->data, &comp->data);
            }
            comp = comp->next;
        }
        lst = lst->next;
    }
    return (head);
}
