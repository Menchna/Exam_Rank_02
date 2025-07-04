/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:12:58 by armkhach          #+#    #+#             */
/*   Updated: 2025/05/22 12:48:01 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(int	n) //int instead of unsigned int
{
	int	i = 1;

	while (i <= n)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}
