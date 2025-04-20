/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:29:39 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 18:55:00 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	print_result(char *function_name, int all_passed)
{
	if (all_passed)
		printf("%-20s:" GREEN "OK" RESET "\n", function_name);
	else
		printf("%-20s:" RED "FAIL" RESET "\n", function_name);
}
