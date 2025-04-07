/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 10:59:46 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/06 11:29:16 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int i = 5;
// 	printf("%d: %d\n", i, ft_sqrt(i));
// 	return (0);
// }