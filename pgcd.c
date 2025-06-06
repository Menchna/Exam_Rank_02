/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:00:56 by armkhach          #+#    #+#             */
/*   Updated: 2025/05/29 16:16:54 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	pgcd(int	a, int	b)
{
	int	i = a;

	while (i > 0)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d", i);
			return ;
		}
		i--;
	}
}

int main(int	argc, char	**argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf ("\n");
	return (0);
}
