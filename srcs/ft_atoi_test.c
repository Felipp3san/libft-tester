/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:25:03 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/11 20:39:12 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_atoi_test()
{
	char	*function_name = "ft_atoi";
	int		all_passed = 1;
	char	str[20] = "    +1393ds 92a";
	int		original;
	int		ft;

	// TEST 1
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft != original)
		all_passed = 0;

	// TEST 2
	ft_strlcpy(str, "12345", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft != original)
		all_passed = 0;

	// TEST 3
	ft_strlcpy(str, "", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft != original)
		all_passed = 0;

	// TEST 4
	ft_strlcpy(str, "    --+929931", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft != original)
		all_passed = 0;

	// TEST 5
	ft_strlcpy(str, "-2147483648", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft != original)
		all_passed = 0;

	// TEST 6
	ft_strlcpy(str, "2147483647", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft != original)
		all_passed = 0;

	// TEST 7
	ft_strlcpy(str, "21474836471", 20);
	ft = ft_atoi(str);
	original = atoi(str);
	if (ft != original)
		all_passed = 0;

	print_result(function_name, all_passed);
}
