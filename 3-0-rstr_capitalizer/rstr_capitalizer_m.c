/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer_m.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:24:41 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/08 12:56:15 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int		ft_upper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

void	str_cap(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == ' ' || str[i + 1] == '\0') && ft_upper(str[i]) == 1)
			ft_putchar(str[i]);
		else if ((str[i + 1] == ' ' || str[i + 1] == '\0') && ft_lower(str[i]) == 1)
			ft_putchar(str[i] - 32);
		else if (ft_upper(str[i]) == 1 && str[i + 1] != ' ')
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			str_cap(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
