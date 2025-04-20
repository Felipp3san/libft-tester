/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:18:46 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/20 20:38:14 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_strlen_test()
{
	char	*function_name = "ft_strlen";
	int		all_passed = 1;
	char	*str;

	str = "Teste";
	if (ft_strlen(str) != strlen(str))
		all_passed = 0;

	str = "Hello world!";
	if (ft_strlen(str) != strlen(str))
		all_passed = 0;

	str = "Big string test 12343 9csa0asdj 4992kjfd sas";
	if (ft_strlen(str) != strlen(str))
		all_passed = 0;

	str = "";
	if (ft_strlen(str) != strlen(str))
		all_passed = 0;

	print_result(function_name, all_passed);
}
