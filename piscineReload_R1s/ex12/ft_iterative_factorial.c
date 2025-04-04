/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:40:06 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/04 14:40:44 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	while (nb-- != 1)
	{
		result *= nb;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	int nbr;

	nbr = 5;
	printf("%d", ft_iterative_factorial(nbr));
}*/
