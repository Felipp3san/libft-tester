/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:11:43 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/17 18:12:26 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strlcat_test(void)
{
	char	*function_name = "ft_strlcat";
	int		all_passed = 1;
	int		copy;
	int		original;
	char	buffer[10];
	char	buffer2[10];
	char	*str;

	str = " This string";
	// Test 1
	ft_strlcpy(buffer, "Concat", 10);
	ft_strlcpy(buffer2, "Concat", 10);
	copy = ft_strlcat(buffer, str, sizeof(buffer));
	original = strlcat(buffer2, str, sizeof(buffer2));
	if (strcmp(buffer, buffer2) != 0 && original != copy)
		all_passed = 0;

	// Test 2
	ft_strlcpy(buffer, "", 10);
	ft_strlcpy(buffer2, "", 10);
	copy = ft_strlcat(buffer, str, sizeof(buffer));
	original = strlcat(buffer2, str, sizeof(buffer2));
	if (strcmp(buffer, buffer2) != 0 && original != copy)
		all_passed = 0;

	// Test 3
	ft_strlcpy(buffer, "Test 3", 10);
	ft_strlcpy(buffer2, "Test 3", 10);
	copy = ft_strlcat(buffer, str, 0);
	original = strlcat(buffer2, str, 0);
	if (strcmp(buffer, buffer2) != 0 && original != copy)
		all_passed = 0;

	// Test 4
	ft_strlcpy(buffer, "1234567890", 10);
	ft_strlcpy(buffer2, "1234567890", 10);
	copy = ft_strlcat(buffer, str, 1);
	original = strlcat(buffer2, str, 1);
	if (strcmp(buffer, buffer2) != 0 && original != copy)
		all_passed = 0;

	// Test 5
	str = "123";
	ft_strlcpy(buffer, "", 1);
	ft_strlcpy(buffer2, "", 1);
	copy = ft_strlcat(buffer, str, 1);
	original = strlcat(buffer2, str, 1);
	if (strcmp(buffer, buffer2) != 0 && original != copy)
		all_passed = 0;

	print_result(function_name, all_passed);
}
