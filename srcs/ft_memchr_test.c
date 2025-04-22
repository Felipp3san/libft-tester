/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:08:12 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/15 21:40:14 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_memchr_test()
{
	char	*function_name = "ft_memchr";
	int		all_passed = 1;
	char str[5] = "Test";
	char *ptr1;
	char *ptr2;

	// TEST 1
	ptr1 = (char *) ft_memchr(str, 's', 5);
	ptr2 = (char *) memchr(str, 's', 5);
	if (strcmp(ptr1, ptr2))
		all_passed = 0;

	// TEST 2
	ptr1 = (char *) ft_memchr(str, 'z', 5);
	ptr2 = (char *) memchr(str, 'z', 5);
	if (strcmp(ptr1, ptr2))
		all_passed = 0;

	// TEST 3
	ptr1 = (char *) ft_memchr(str, 'z', 5);
	ptr2 = (char *) memchr(str, 'z', 5);
	if ((ptr1 != NULL) && (ptr2 != NULL))
		all_passed = 0;

	// TEST 4
	ptr1 = (char *) ft_memchr(str, '\0', 5);
	ptr2 = (char *) memchr(str, '\0', 5);
	if (*ptr1 != '\0' && *ptr2 != '\0')
		all_passed = 0;

	print_result(function_name, all_passed);
}
