/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 16:21:56 by mwingrov          #+#    #+#             */
/*   Updated: 2017/08/07 16:38:36 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isblank(int c)
{
	if(c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

int	count_words(char *s)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != '\0' && ft_isblank(s[i]))
			i++;
		while (s[i] && !ft_isblank(s[i]))
		{
			count++;
			while (s[i] && !ft_isblank(s[i]))
				i++;
		}
	}
	return (count);
}
void ft_epur(char *str)
{
	int len;
	int	c;

	len = 0;
	c = count_words(str);
	while (str[len] != '\0')
	{
		while (str[len] && ft_isblank(str[len]))
			len++;
		while (str[len] != '\0' && !ft_isblank(str[len]))
			write(1, &str[len++], 1);
		if (c > 1)
		{
			c--;
			write(1, " ", 1);
		}
	}
}
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_epur(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
