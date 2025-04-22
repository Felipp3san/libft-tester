/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:40:31 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/20 20:39:11 by fde-alme         ###   ########.fr       */
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
	ft_bzero_test();
	ft_memcpy_test();
	ft_memmove_test();
	ft_strlcpy_test();
	ft_strlcat_test();
	ft_toupper_test();
	ft_tolower_test();
	ft_strchr_test();
	ft_strrchr_test();
	ft_strncmp_test();
	ft_memchr_test();
	ft_memcmp_test();
	//ft_strnstr_test();
	ft_atoi_test();

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
