/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:30:31 by armkhach          #+#    #+#             */
/*   Updated: 2025/05/16 16:02:10 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int	n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_rrange(int	start, int	end)
{
	int	i;

	int	n = 1 + ft_abs(end - start);
	int	*arr = malloc(sizeof(int) * n);
	i = 0;

	if (start <= end)
	{
		while (i < n)
		{
			arr[i++] = end--;
		}
	}
	else
		while (i < n)
		{
			arr[i++] = end++;
		}
	return (arr);
}
/*
#include <stdio.h>

int main(void)
{
	int start = 1;
	int end = 2;
	int *arr = ft_rrange(start, end);
	int n = ft_abs(start - end) + 1;

	for (int i = 0; i < n; i++)
	{
		printf("%i", arr[i]);
	}

	free (arr);
}
*/
