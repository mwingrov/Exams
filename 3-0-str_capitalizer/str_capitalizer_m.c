/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer_m.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:17:46 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/08 16:30:18 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	p_str(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
		{
			ft_putchar(str[i]);
			i++;
		}
		if (!str[i])
			return ;
		if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i++] - 32;
		else
			c = str[i++];
		ft_putchar(c);
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				c = str[i] + 32;
			else
				c = str[i];
			ft_putchar(c);
			i++;
		}
	}
}

void	str_cap(int nb, char **tab)
{
	int	i;

	i = -1;
	while (++i < nb)
	{
		p_str(tab[i]);
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
		str_cap(ac - 1, &av[1]);
	else
		ft_putchar('\n');
	return (0);
}
