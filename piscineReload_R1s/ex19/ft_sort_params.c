/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:11:20 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/07 11:51:05 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int	main(int argc, char **argv)
{
	int count;
	int swap;
	char *temp;

	count = 1;
	swap = 0;
	while (*argv)
	{
		if (ft_strcmp(argv[count], argv[count + 1]) > 0)
		{
			temp = argv[count];
			argv[count] = argv[count + 1];
			argv[count] = temp;
			swap ++;
			count ++;
		}
		if (swap == 0 && count == argc - 1)
			break;
		if (count == argc - 1)
		{
			swap = 0;
			count = 1;
		}
		argv++;
	}
	while(*argv)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		argv++;
	}
	return (1);
}
