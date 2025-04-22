/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:52:50 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/09 20:59:11 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_toupper_test()
{
	char	*function_name = "ft_toupper";
	int		all_passed = 1;
	int	result;

	result = ft_toupper(97);
	if (result != 65)
		all_passed = 0;

	result = ft_toupper(111);
	if (result != 79)
		all_passed = 0;

	result = ft_toupper(54);
	if (result != 54)
		all_passed = 0;

	result = ft_toupper(32);
	if (result != 32)
		all_passed = 0;

	print_result(function_name, all_passed);
}
