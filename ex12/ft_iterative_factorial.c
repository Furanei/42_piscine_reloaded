/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:40:05 by mbriffau          #+#    #+#             */
/*   Updated: 2016/11/05 19:59:16 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb >= 0 && nb <= 12)
	{
		if (nb == 0)
		{
			return (1);
		}
		while (nb > 1)
		{
			fact = fact * (nb - 1);
			nb -= 1;
		}
		return (fact);
	}
	else
	{
		return (0);
	}
}
