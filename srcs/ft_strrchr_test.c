/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:36:40 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/18 22:27:52 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strchr_test(void)
{
	char	*function_name = "ft_strrchr";
	int		all_passed = 1;
	char	*custom;
	char	*original;

	custom = ft_strrchr("Find the last ch in this string", 'i');
	original = strrchr("Find the last ch in this string", 'i');
	if (original != custom)
		all_passed = 0;

	custom = ft_strrchr("Find the last ch in this string", ' ');
	original = strrchr("Find the last ch in this string", ' ');
	if (original != custom)
		all_passed = 0;

	custom = ft_strrchr("Find the last ch in this string", '\0');
	original = strrchr("Find the last ch in this string", '\0');
	if (original != custom)
		all_passed = 0;

	custom = ft_strrchr("", 'a');
	original = strrchr("", 'a');
	if (original != NULL && custom != NULL)
		all_passed = 0;

	printf("=== Test 5 ===\n");
	custom = ft_strrchr("", '\0');
	original = strrchr("", '\0');
	if (original != custom)
		all_passed = 0;
	
	print_result(function_name, all_passed);
}
