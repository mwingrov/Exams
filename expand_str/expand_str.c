/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaunder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 12:17:24 by bsaunder          #+#    #+#             */
/*   Updated: 2016/06/24 13:33:35 by bsaunder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	put_spaces(char c)
{
	ft_putchar(c);
	ft_putchar(c);
	ft_putchar(c);
}

char	expand_str(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str);
	while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] != ' ' && str[i] != '\t'))
			ft_putchar(str[i]);
		if (str[i] == ' ' || str[i] == '\t')
			if (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\0')
				put_spaces(' ');
		i++;
	}
	return (0);
}

int 	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		expand_str(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
		return (0);
	}
	return (0);
}

