/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:07:09 by armkhach          #+#    #+#             */
/*   Updated: 2025/06/06 12:31:07 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int	argc, char	**argv)
{
	int	i = 0;
	int	j = 1;

	if (argc > 1)
	{
		while (j < argc)
		{
			while (argv[j][i] != '\0')
			{
				if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					argv[j][i] += 32;
				i++;
			}
			i = 0;
			while (argv[j][i] != '\0')
			{
				if ((argv[j][i] >= 'a' && argv[j][i] <= 'z') && (argv[j][i + 1] == '\0'))
				argv[j][i] -= 32;
				else if ((argv[j][i] >= 'a' && argv[j][i] <= 'z') && (argv[j][i + 1] == ' ' || argv[j][i + 1] == '\t'))
					argv[j][i] -= 32;
				write (1, &argv[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			j++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
