/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:55:50 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 16:37:46 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void ft_isalpha_test()
{
	char	*function_name = "ft_isalpha";
	int		all_passed = 1;
	int		result;

	result = ft_isalpha('A');
	if (result == 0)
		all_passed = 0;

	result = ft_isalpha('a');
	if (result == 0)
		all_passed = 0;

	result = ft_isalpha('Z');
	if (result == 0)
		all_passed = 0;

	result = ft_isalpha('z');
	if (result == 0)
		all_passed = 0;

	result = ft_isalpha('^');
	if (result == 1)
		all_passed = 0;

	result = ft_isalpha('[');
	if (result == 1)
		all_passed = 0;

	result = ft_isalpha('8');
	if (result == 1)
		all_passed = 0;

	print_result(function_name, all_passed);
}
