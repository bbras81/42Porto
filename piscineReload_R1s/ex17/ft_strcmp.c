/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 15:32:43 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/07 11:22:10 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

 #include <stdio.h>
 #include <string.h>

int	main(void)
 {
 	char *str1;
 	char *str2;

 	str1 = "teste";
 	str2 = "Antonio";
 	printf("%d\n", ft_strcmp(str1, str2));
 	printf("%d", strcmp(str1, str2));

 	return (0);
 }
