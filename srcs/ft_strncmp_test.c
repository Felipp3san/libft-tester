/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:45:13 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/10 19:34:55 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strncmp_test()
{
	char	*function_name = "ft_strncmp";
	int		all_passed = 1;
	char	*str1;
	char	*str2;
	int		result;

	str1 = "Teste1";
	str2 = "Teste1";

	result = ft_strncmp(str1, str2, 6);
	if (result != 0)
		all_passed = 0;

	str1 = "Tes";
	str2 = "Teste1";
	result = ft_strncmp(str1, str2, 2);
	if (result != 0)
		all_passed = 0;

	result = ft_strncmp(str1, str2, 4);
	if (result != -116)
		all_passed = 0;

	print_result(function_name, all_passed);
}
