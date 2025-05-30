/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:40:53 by brunmigu          #+#    #+#             */
/*   Updated: 2025/03/31 11:49:52 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int chr)
{
	if (chr < 0 && chr <= 127)
		return (1);
	return (0);
}
