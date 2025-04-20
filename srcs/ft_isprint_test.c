/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:45:01 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/20 20:38:05 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_isprint_test()
{
	char	*function_name = "ft_isprint";
	int		all_passed = 1;
	unsigned char	ch;

	ch = 0x12;
	if (ft_isprint(ch) && isprint(ch))
		all_passed = 0;

	ch = 0x32;
	if (!ft_isprint(ch) && !isprint(ch))
		all_passed = 0;

	ch = 0xEA;
	if (ft_isprint(ch) && isprint(ch))
		all_passed = 0;

	ch = 0x20;
	if (!ft_isprint(ch) && !isprint(ch))
		all_passed = 0;

	ch = 0x14;
	if (ft_isprint(ch) && isprint(ch))
		all_passed = 0;

	ch = 0xC8;
	if (ft_isprint(ch) && isprint(ch))
		all_passed = 0;
		
	print_result(function_name, all_passed);
}
