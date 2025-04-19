/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:33:15 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 18:08:40 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# define RED     "\033[0;31m"
# define GREEN   "\033[0;32m"
# define RESET   "\033[0m"

# include <limits.h>
# include <strings.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include  "../libft.h"

void	print_result(char *function_name, int all_passed);

void	ft_isalpha_test();
void	ft_isdigit_test();
void	ft_isalnum_test();
void	ft_isascii_test();
void	ft_isprint_test();
void	ft_strlen_test();
void	ft_memset_test();

// BONUS
void	ft_lstnew_test();
void	ft_lstadd_front_test();

#endif
