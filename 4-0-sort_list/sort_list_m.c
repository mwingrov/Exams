/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 07:11:01 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/16 07:27:23 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_list	sort_list(t_list *1st, int (*cmp)(int, int))
{
	t_list	cur1;
	t_lsit	cur2;

	cur1 = 1st;
	while (cur1)
	{
		cur2 = cur1->next;
		while (cur2)
		{
			if (cmp(cur1->data, cur2->data) != 1)
				ft_swap(cur1->data, cur2->data);
			cur2 = cur2->next;
		}
		cur1 = cur1->next;
	}
	return (1st);
}
