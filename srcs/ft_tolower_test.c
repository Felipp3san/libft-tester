/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:56:17 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/09 20:59:25 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_tolower_test()
{
	char	*function_name = "ft_tolower";
	int		all_passed = 1;
	int	result;

	result = ft_tolower(65);
	if (result != 97)
		all_passed = 0;

	result = ft_tolower(79);
	if (result != 111)
		all_passed = 0;

	result = ft_tolower(54);
	if (result != 54)
		all_passed = 0;

	result = ft_tolower(32);
	if (result != 32)
		all_passed = 0;

	print_result(function_name, all_passed);
}
