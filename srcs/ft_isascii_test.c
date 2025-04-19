/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:28:16 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 16:51:32 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	ft_isascii_test()
{
	char	*function_name = "ft_isascii";
	int		all_passed = 1;
	int	result;

	result = ft_isascii(0x4d);
	if(result == 0)
		all_passed = 0;

	result = ft_isascii(0x70);
	if(result == 0)
		all_passed = 0;

	result = ft_isascii(0x80);
	if(result == 1)
		all_passed = 0;

	result = ft_isascii(0x12);
	if(result == 0)
		all_passed = 0;

	result = ft_isascii(0x93);
	if(result == 1)
		all_passed = 0;
	
	print_result(function_name, all_passed);
}
