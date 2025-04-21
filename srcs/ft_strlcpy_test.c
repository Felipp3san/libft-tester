/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:58:43 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/09 18:42:00 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strlcpy_test()
{
	char	*function_name = "ft_strlcpy";
	int		all_passed = 1;
	char	dest[10];
	char	dest2[10];
	char	*src;
	size_t	size;
	size_t	size2;

	src = "TesteTest";
	size = ft_strlcpy(dest, src, 10);
	size2 = strlcpy(dest2, src, 10);
	if (strcmp(dest, dest2) != 0 && size != size2)
		all_passed = 0;
	
	src = "HelloWorld!!!!!";
	size = ft_strlcpy(dest, src, 10);
	size2 = strlcpy(dest2, src, 10);
	if (strcmp(dest, dest2) != 0 && size != size2)
		all_passed = 0;

	src = "Hello";
	size = ft_strlcpy(dest, src, 10);
	size2 = strlcpy(dest2, src, 10);
	if (strcmp(dest, dest2) != 0 && size != size2)
		all_passed = 0;

	print_result(function_name, all_passed);
}
