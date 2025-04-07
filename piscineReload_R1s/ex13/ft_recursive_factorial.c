/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 08:25:46 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/05 08:41:04 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb <= 0)
		return (0);
	return (nb * ft_recursive_factorial(nb -1));
}
/*
#include <stdio.h>
int main() {
  printf("%d", ft_recursive_factorial(5));
  return (0);
}*/
