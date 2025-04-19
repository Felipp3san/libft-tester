/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:16:26 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 17:05:58 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	ft_memset_test()
{
	char	*function_name = "ft_memset";
	int		all_passed = 1;
	const int	SIZE = 10;
	char str[] = "TestTest1";
	char str2[] = "TestTest2";

	if (*(unsigned char *) ft_memset(str, 'A', (SIZE - 1)) != 
			*(unsigned char *) memset(str2, 'A', (SIZE - 1)))
			all_passed = 0;
		

	if (*(unsigned char *) ft_memset(str, 78, (SIZE - 1)) != 
			*(unsigned char *) memset(str2, 78, (SIZE - 1)))
			all_passed = 0;

	ft_memset(str, '0', (SIZE - 1));
	memset(str2, '0', (SIZE - 1));

	if (*(unsigned char *) ft_memset(str, 92, (SIZE / 2)) != 
			*(unsigned char *) memset(str2, 92, (SIZE / 2)))
			all_passed = 0;

	print_result(function_name, all_passed);
}

