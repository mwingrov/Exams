/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaunder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/23 14:21:41 by bsaunder          #+#    #+#             */
/*   Updated: 2016/06/23 15:18:45 by bsaunder         ###   ########.fr       */
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

char	last_word(char *str)
{
	int i;
    
	i = ft_strlen(str);
	while ((str[i - 1] == ' ' || str[i - 1] == '\t') && str[i - 1] != '\0')
		i--;
	while (str[i - 1] != ' ' && str[i - 1] != '\t' && str[i - 1] != '\0')
	{
		i--;
	}
    while ((str[i] != ' ' || str[i] != '\t') && str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    return (0);
}

int 	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		last_word(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
		return (0);
	}
	return (0);
}

