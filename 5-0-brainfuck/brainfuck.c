/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oexall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/18 11:39:53 by oexall            #+#    #+#             */
/*   Updated: 2016/06/18 11:48:30 by oexall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_a;
char	*g_p;
char	array[2048];

void	ft_solve_one()
{
	int	ok;

	ok = 0;
	while (*g_a)
	{
		if (*g_a == '[')
			ok++;
		if (*g_a == ']')
			ok--;
		if (ok == 0)
			return ;
		g_a++;
	}
}

void	ft_solve_two()
{
	int	ok;

	ok = 0;
	while (*g_a)
	{
		if (*g_a == ']')
			ok++;
		if (*g_a == '[')
			ok--;
		if (ok == 0)
			return ;
		g_a--;
	}
}

void	ft_interpret(char c)
{
	if (c == '>')
		g_p++;
	else if (c == '<')
		g_p--;
	else if (c == '+')
		*g_p = *g_p + 1;
	else if (c == '-')
		*g_p = *g_p - 1;
	else if (c == '.')
		write(1, g_p, 1);
	else if (c == '[')
	{
		if (*g_p == 0)
			ft_solve_one();
	}
	else if (c == ']')
	{
		if (*g_p != 0)
			ft_solve_two();
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		g_a = argv[1];
		g_p = array;
		while (*g_a)
		{
			ft_interpret(*g_a);
			g_a++;
		}
	}
	return (0);
}
