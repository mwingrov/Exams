/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab_m.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 08:00:03 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/23 08:12:54 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	a;
	unsigned int	i;

	a = 0;
	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(tab[i], tab[i + 1]);
			a = i;
		}
		while (a)
		{
			if (tab[a - 1] > tab[a])
			{
				ft_swap(tab[a - 1], tab[a]);
				--a;
			}
			else
				a = 0;
		}
		i++;
	}
}
