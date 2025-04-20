/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:40:31 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 20:24:24 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	print_header(void)
{
	printf("\n\033[1;36m");
	printf("=========================================\n");
	printf("            🔍 LIBFT TESTER 🔍           \n");
	printf("=========================================\n");
	printf("👤 User: fde-alme\n");
	printf("📧 Email: fde-alme@student.42porto.com\n");
	printf("=========================================\n");
	printf("\033[0m"); 
}


int	main(void)
{
	print_header();

	printf("\n\033[1;36m");
	printf("=========================================\n");
	printf("                 MANDATORY               \n");
	printf("=========================================\n");
	printf("\033[0m"); 
	ft_isalpha_test();
	ft_isdigit_test();
	ft_isalnum_test();
	ft_isascii_test();
	ft_isprint_test();
	ft_strlen_test();
	ft_memset_test();

	printf("\n\033[1;36m");
	printf("=========================================\n");
	printf("                   BONUS                 \n");
	printf("=========================================\n");
	printf("\033[0m"); 
	ft_lstnew_test();
	ft_lstadd_front_test();
	ft_lstsize_test();
	ft_lstlast_test();
	ft_lstadd_back_test();

	return (0);
}
