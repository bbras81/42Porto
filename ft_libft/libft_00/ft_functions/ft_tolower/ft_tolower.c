/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:35:09 by brunmigu          #+#    #+#             */
/*   Updated: 2025/03/27 13:18:38 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int chr) {
  if (chr >= 65 && chr <= 90)
  {
    chr += 32;
  }
  return (chr);
}


