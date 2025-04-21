/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:56:51 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/20 20:38:59 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	ft_lstadd_back_test()
{
	char	*function_name = "ft_lstadd_back_test";
	int		all_passed = 1;
	char	*content;
	t_list	*elem4;
	t_list	*elem3;
	t_list	*elem2;
	t_list	*elem1;
	t_list	*null_elem;
	t_list	*cursor;

	elem1 = (t_list *) malloc(sizeof(t_list));
	elem2 = (t_list *) malloc(sizeof(t_list));
	elem3 = (t_list *) malloc(sizeof(t_list));
	elem4 = (t_list *) malloc(sizeof(t_list));

	content = "Fourth node";
	elem4->content = (void *) content;
	elem4->next = NULL;

	content = "Third node";
	elem3->content = (void *) content;
	elem3->next = NULL;

	content = "Second node";
	elem2->content = (void *) content;
	elem2->next = NULL;

	content = "First node";
	elem1->content = (void *) content;
	elem1->next = NULL;

	ft_lstadd_back(&elem1, elem2);
	ft_lstadd_back(&elem1, elem3);
	ft_lstadd_back(&elem1, elem4);

	cursor = elem1;
	while (cursor && cursor->next != NULL)
		cursor = cursor->next;

	if (cursor != elem4)
		all_passed = 0;

	null_elem = NULL;
	ft_lstadd_back(&null_elem, elem4);
	if (null_elem != elem4 && !strcmp(null_elem->content, "Fourth node"))
		all_passed = 0;

	ft_lstadd_back(NULL, NULL);

	free(elem1);
	free(elem2);
	free(elem3);
	free(elem4);

	print_result(function_name, all_passed);
}
