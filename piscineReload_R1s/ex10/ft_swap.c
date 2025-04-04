/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:32:20 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/04 14:38:06 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>
int main()
{
	int a;
	int b;

	a = 4;
	b = 2;

	printf("a = %d", a);
	printf("b = %d", b);
	ft_swap(&a, &b);
	printf("a = %d", a);
	printf("b = %d", b);
}*/
