/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:40:31 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 18:22:06 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	print_header(void)
{
	printf("\n\033[1;36m"); // Bold Cyan text
	printf("=========================================\n");
	printf("            🔍 LIBFT TESTER 🔍           \n");
	printf("=========================================\n");
	printf("👤 User: fde-alme\n");
	printf("📧 Email: fde-alme@student.42porto.com\n");
	printf("=========================================\n");
	printf("\033[0m"); // Reset formatting
}


int	main(void)
{
	print_header();
	ft_isalpha_test();
	ft_isdigit_test();
	ft_isalnum_test();
	ft_isascii_test();
	ft_isprint_test();
	ft_strlen_test();
	ft_memset_test();

	ft_lstnew_test();
	ft_lstadd_front_test();

	return (0);
}
