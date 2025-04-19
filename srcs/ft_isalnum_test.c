/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 21:14:38 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 16:48:36 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	ft_isalnum_test()
{
	char	*function_name = "ft_isalnum";
	int		all_passed = 1;
	int		result;

	result = ft_isalnum('A');
	if (result == 0)
		all_passed = 0;

	result = ft_isalnum('2');
	if (result == 0)
		all_passed = 0;

	result = ft_isalnum('@');
	if (result == 1)
		all_passed = 0;

	result = ft_isalnum('%');
	if (result == 1)
		all_passed = 0;

	result = ft_isalnum('(');
	if (result == 1)
		all_passed = 0;

	result = ft_isalnum('x');
	if (result == 0)
		all_passed = 0;

	print_result(function_name, all_passed);
}
