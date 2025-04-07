/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:10:52 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/07 13:38:17 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter != n)
	{
		s = c;
		s++;
	}
}

int	main(void)
{
	char	test[5];

	printf("Antes: %s", test);
	ft_memset(&test, 'a', 3);
	printf("Depois: %s", test);
	return (0);
}
