/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:57 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/04 16:05:58 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a == 0 || b == 0)
	{
		*div = 0;
		*mod = 0;
	}
	else
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
int main()
{
	int a;
	int b;

	a = 8;
	b = 2;
	int div;
	int mod;
	
	div = 0;
	mod = 0;

	ft_div_mod(a, b, &div, &mod);

	printf("div of %d, for %d is = %d",a, b, div);
	printf("mod of %d, for %d is = %d",a, b, mod);

}*/
