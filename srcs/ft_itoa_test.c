/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:34:17 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/18 22:34:19 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	char	*str;
	
	printf("=== Test 1 ===\n");
	str = ft_itoa(0);
	printf("Result: %s\n", str);

	printf("=== Test 2 ===\n");
	str = ft_itoa(12345);
	printf("Result: %s\n", str);

	printf("=== Test 3 ===\n");
	str = ft_itoa(-12345);
	printf("Result: %s\n", str);

	printf("=== Test 4 ===\n");
	str = ft_itoa(2147483647);
	printf("Result: %s\n", str);

	printf("=== Test 5 ===\n");
	str = ft_itoa(-2147483648);
	printf("Result: %s\n", str);

	return (0);
}
