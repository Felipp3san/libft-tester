/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:05:53 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/18 22:31:43 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strnstr_test()
{
	char	*function_name = "ft_strnstr";
	int		all_passed = 1;
	char	*haystack;
	char	*needle;
	char	*original;
	char	*custom;

	haystack = "Find this string!";
	needle = "this";
	custom = ft_strnstr(haystack, needle, 17);
	original = strnstr(haystack, needle, 17);
	if (strcmp(original, custom) != 0)
		all_passed = 0;

	haystack = "Find this string!";
	needle = "this";
	custom = ft_strnstr(haystack, needle, 0);
	original = strnstr(haystack, needle, 0);
	if (strcmp(original, custom) != 0)
		all_passed = 0;

	haystack = "Find this string!";
	needle = "";
	custom = ft_strnstr(haystack, needle, 17);
	original = strnstr(haystack, needle, 17);
	if (strcmp(original, custom) != 0)
		all_passed = 0;
	
	haystack = "Find this string!";
	needle = "ZZXXZXX";
	custom = ft_strnstr(haystack, needle, 17);
	original = strnstr(haystack, needle, 17);
	if (strcmp(original, custom) != 0)
		all_passed = 0;

	haystack = "";
	needle = "ZZXXZXX";
	custom = ft_strnstr(haystack, needle, 1);
	original = strnstr(haystack, needle, 1);
	if (strcmp(original, custom) != 0)
		all_passed = 0;

	haystack = "Needle in the end of the string";
	needle = "the";
	custom = ft_strnstr(haystack, needle, 11);
	original = strnstr(haystack, needle, 11);
	if (strcmp(original, custom) != 0)
		all_passed = 0;

	print_result(function_name, all_passed);
}
