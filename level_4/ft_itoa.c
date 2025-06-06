/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armkhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:34:57 by armkhach          #+#    #+#             */
/*   Updated: 2025/05/23 16:24:47 by armkhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count(int	nbr)
{
	int	counter = 0;

	if (nbr == 0)
		return (1);
	
	while (nbr != 0)
	{
		nbr /= 10;
		counter++;
	}
	return (counter);
}

static int	tens(int	counter)
{
	int	ten = 1;

	while (counter > 1)
	{
		ten *= 10;
		counter--;
	}
	return (ten);
}

static char	*resulter(char	*result, int	nbr, int	i)
{
	int	ten;
	int	num;

	ten = tens(count(nbr));

	while (ten != 0)
	{
		num = (nbr / ten);
		result[i++] = num + '0';
		nbr = nbr - ten * num;
		ten /= 10;
	}
	result[i] = '\0';
	return (result);
}

static int	fill(char	*result, int	nbr, int	minus, int	len)
{
	int	i = 0;
	int	ten;

	ten = tens(count(nbr));

	if (len == 12 && minus == -1)
	{
		result[0] = '-';
		result[1] = '2';
		i = 2;
	}

	else if (minus == -1)
	{
		result[0] = '-';
		i = 1;
	}

	resulter(result, nbr, i);
	if (!result)
		return (0);
	return (1);
}


char	*ft_itoa(int	nbr)
{
	int	minus = 1;
	int	len;
	char	*result;

	len = count(nbr);

	if (nbr == -2147483648)
	{
		nbr = 147483648;
		minus = -1;
		len += 2;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
		minus = -1;
	}

	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result || (!fill(result, nbr, minus, len)))
		return (NULL);
	return (result);
}

#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(-71234));
}

