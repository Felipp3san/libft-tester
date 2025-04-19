/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 20:44:14 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 16:25:24 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void ft_isdigit_test()
{
	char	*function_name = "ft_isdigit";
	int		all_passed = 1;
	int	result;

	result = ft_isdigit('2');
	if (result == 0)
		all_passed = 0;

	result = ft_isdigit('8');
	if (result == 0)
		all_passed = 0;

	result = ft_isdigit('x');
	if (result == 1)
		all_passed = 0;

	result = ft_isdigit('*');
	if (result == 1)
		all_passed = 0;

	result = ft_isdigit('/');
	if (result == 1)
		all_passed = 0;

	result = ft_isdigit('A');
	if (result == 1)
		all_passed = 0;

	print_result(function_name, all_passed);
}
