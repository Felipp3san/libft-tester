/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:30:27 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:37:59 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_memmove_test()
{
	char	*function_name = "ft_memmove";
	int		all_passed = 1;
	char	dest[10];
	char	dest2[10];
	char	*src;

	src = "TesteTest";
	ft_memmove(dest, src, 10);
	memmove(dest2, src, 10);
	if (strcmp(dest, dest2) != 0)
		all_passed = 0;

	src = "Hello";
	ft_memmove(dest, src, 5);
	memmove(dest2, src, 5);
	if (strcmp(dest, dest2) != 0)
		all_passed = 0;

	print_result(function_name, all_passed);
}
