/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 16:29:43 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/06 19:01:25 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);

	int args;
	int chars;

	args = 1;
	chars = 0;
	while (args < argc)
	{
		while (argv[args][chars])
		{
			ft_putchar(argv[args][chars]);
			chars++;
		}
		ft_putchar('\n');
		chars = 0;
		args++;
	}
	return (1);
}