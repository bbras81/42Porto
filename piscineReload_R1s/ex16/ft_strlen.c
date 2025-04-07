/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 15:14:17 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/06 15:31:17 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_strlen(char *str)
{
	unsigned long	counter;

	counter = 0;
	while (*str)
	{
		str++;
		counter++;
	}
	return (counter);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *str;

// 	str = "Como estas?";
// 	printf("%ld\n", ft_strlen(str));
// 	printf("%ld", strlen(str));
// 	return (0);
// }