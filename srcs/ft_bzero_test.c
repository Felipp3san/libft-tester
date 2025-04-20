/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:33:55 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/20 20:32:59 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	ft_bzero_test()
{
	char	*function_name = "ft_bzero";
	int		all_passed = 1;
	const int	SIZE = 10;
	char str[] = "TestTest1";
	char str2[] = "TestTest2";

	ft_bzero((str + (SIZE - 2)), 1);
	bzero((str2 + (SIZE - 2)), 1);

	if (strcmp(str, str2) != 0)
		all_passed = 0;
	
	ft_bzero((str + (SIZE - 5)), 1);
	bzero((str2 + (SIZE - 5)), 1);
	if (strcmp(str, str2) != 0)
		all_passed = 0;

	ft_bzero((str + 1), 1);
	bzero((str2 + 1), 1);
	if (strcmp(str, str2) != 0)
		all_passed = 0;

	print_result(function_name, all_passed);
}
