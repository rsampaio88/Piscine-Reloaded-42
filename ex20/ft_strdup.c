/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:30:32 by rsampaio          #+#    #+#             */
/*   Updated: 2024/10/16 17:46:51 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *) malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	else
	{
		while (j < i)
		{
			dest[j] = src[j];
			j++;
		}
	}
	dest[j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char *src = "Testtte!";	
	
	printf("%s", ft_strdup(src));
	return (0);
}*/
