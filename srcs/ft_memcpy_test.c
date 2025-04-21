/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:22:22 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/08 14:35:44 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_memcpy_test()
{
	char	*function_name = "ft_memcpy";
	int		all_passed = 1;
	char *src;
	char dest[10];
	char dest2[10];

	src = "TesteTest";
	ft_memcpy(dest, src, 10);
	memcpy(dest2, src, 10);
	if (strcmp(dest, dest2) != 0)
		all_passed = 0;

	src = "Hello";
	ft_memcpy(dest, src, 5);
	memcpy(dest2, src, 5);
	if (strcmp(dest, dest2) != 0)
		all_passed = 0;

	print_result(function_name, all_passed);
}
