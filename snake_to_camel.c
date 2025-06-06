/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:29:14 by armkhach          #+#    #+#             */
/*   Updated: 2025/05/19 13:02:39 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_toupper(char	c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int main(int	argc, char	**argv)
{
	int	i = 0;
	char	c;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == '_')
			{
				c = ft_toupper(argv[1][++i]);
				write (1, &c, 1);
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
