/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:06:03 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/09 21:29:38 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strchr_test()
{
	char	*function_name = "ft_strchr";
	int		all_passed = 1;
	char	*target;
	char	*located;

	target = "Test string";
	located = ft_strchr(target, 's');
	if (*located != 's')
		all_passed = 0;

	located = ft_strchr(target, 'i');
	if (*located != 'i')
		all_passed = 0;

	located = ft_strchr(target, 'T');
	if (*located != 'T')
		all_passed = 0;

	located = ft_strchr(target, '\0');
	if (*located != '\0')
		all_passed = 0;

	located = strchr(target, 'z');
	if (located != NULL)
		all_passed = 0;

	print_result(function_name, all_passed);
}
