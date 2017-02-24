/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 22:19:27 by mbriffau          #+#    #+#             */
/*   Updated: 2016/11/09 21:41:48 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		x;
	int		y;

	y = 0;
	if (!src)
	{
		return (NULL);
	}
	x = ft_strlen(src);
	dest = malloc(sizeof(char) * (x + 1));
	while (y < x)
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
