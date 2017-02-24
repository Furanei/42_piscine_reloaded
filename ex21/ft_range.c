/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:06:28 by mbriffau          #+#    #+#             */
/*   Updated: 2016/11/09 22:27:16 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		nb;
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	nb = max - min;
	tab = (int*)malloc(sizeof(int) * nb);
	while (i < nb)
	{
		tab[i] = (min + i);
		i++;
	}
	return (tab);
}
