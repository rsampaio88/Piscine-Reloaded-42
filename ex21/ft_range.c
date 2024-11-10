/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:48:18 by rsampaio          #+#    #+#             */
/*   Updated: 2024/10/16 18:04:09 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	range;
	int	i;

	dest = NULL;
	range = max - min;
	if (range <= 0)
		return (NULL);
	dest = (int *) malloc(4 * range);
	if (dest == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (min < max)
		{
			dest[i] = min;
			min++;
			i++;
		}
		return (dest);
	}
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int	i;
	int	*fim;

	a = 0;
	b = 5;
	i = 0;
	fim = ft_range(a, b);
	while (i < (b - a))
	{
		printf("%d", fim[i]);
		i++;
	}
	return (0);
}*/
