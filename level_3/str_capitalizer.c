/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:54:10 by armkhach          #+#    #+#             */
/*   Updated: 2025/05/22 13:36:51 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	capitalizer(char	*str)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}

	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
}

int main(int	argc, char	**argv)
{
	int	i = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			capitalizer(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}

/*
#include <unistd.h>

int main(int	argc, char	**argv)
{
	int	i = 0;
	int	j = 1;

	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					argv[j][i] += 32;
				i++;
			}
			i = 0;
			while (argv[j][i] != '\0')
			{
				if (argv[j][0] >= 'a' && argv[j][i] <= 'z')
					argv[j][i] -= 32;
				else if ((argv[j][i] >= 'a' && argv[j][i] <= 'z')
					&& (argv[j][i - 1] == ' ' || argv[j][i - 1] == '\t'))
					argv[j][i] -= 32;
				write (1, &argv[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
*/
