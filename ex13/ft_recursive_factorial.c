/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 21:36:58 by mbriffau          #+#    #+#             */
/*   Updated: 2016/11/05 22:09:04 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb <= 12)
	{
		if (nb == 0)
			return (1);
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
	else
		return (0);
}
