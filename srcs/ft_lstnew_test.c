/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:27:16 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/20 20:43:52 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_lstnew_test()
{
	char	*function_name = "ft_lstnew";
	int		all_passed = 1;
	char	*content;
	t_list	*node;

	content = "String to put in content";
	node = ft_lstnew((void *) content);

	if (!node)
		all_passed = 0;

	if (strcmp((char *)node->content, (char *)content) != 0)
		all_passed = 0;

	if (node->next != NULL)
		all_passed = 0;

	print_result(function_name, all_passed);
}
