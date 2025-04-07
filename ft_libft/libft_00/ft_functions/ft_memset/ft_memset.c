/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:10:52 by brunmigu          #+#    #+#             */
/*   Updated: 2025/03/26 10:20:36 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int *ft_memset() { return (0); }

int main() {
  char *test;

  test = "Ola Mundo";
  printf("Antes: %s", test);
  memset(&test, 0, sizeof(test));
  printf("Depois: %s", test);
  return (0);
}
