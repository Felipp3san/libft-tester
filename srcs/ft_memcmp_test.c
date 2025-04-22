/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:29:40 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/15 21:54:46 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_memcmp_test()
{
	char	*function_name = "ft_memcmp";
	int		all_passed = 1;
	char	str1[7] = "Teste1";
	char	str2[7] = "Teste1";
	int		result_ft;
	int		result;

	// TEST 1
	result_ft = ft_memcmp(str1, str2, 7);
	result = memcmp(str1, str2, 7);
	if (result_ft != result)
		all_passed = 0;

	// TEST 2
	ft_strlcpy(str1, "Test", 7);
	result_ft = ft_memcmp(str1, str2, 7);
	result = memcmp(str1, str2, 7);
	if (result_ft && result)
		all_passed = 0;

	// TEST 3
	ft_strlcpy(str1, "", 7);
	ft_strlcpy(str2, "12345", 7);

	result_ft = ft_memcmp(str1, str2, 7);
	result = memcmp(str1, str2, 7);
	if (result_ft && result)
		all_passed = 0;

	// TEST 4
	ft_strlcpy(str1, "", 7);
	ft_strlcpy(str2, "", 7);

	result_ft = ft_memcmp(str1, str2, 7);
	result = memcmp(str1, str2, 7);

	if (result_ft != result)
		all_passed = 0;

	print_result(function_name, all_passed);
}
