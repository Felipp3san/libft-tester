/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:04:12 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 19:10:49 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	ft_lstsize_test()
{
	char	*function_name = "ft_lstsize";
	int		all_passed = 1;
	char	*content;

	t_list	*elem4;
	t_list	*elem3;
	t_list	*elem2;
	t_list	*elem1;

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

	if (ft_lstsize(elem4) != 1)
		all_passed = 0;
		
	elem3->next = elem4;
	if (ft_lstsize(elem3) != 2)
		all_passed = 0;

	elem2->next = elem3;
	elem1->next = elem2;
	if (ft_lstsize(elem1) != 4)
		all_passed = 0;

	if (ft_lstsize(NULL) != 0)
		all_passed = 0;
	
	print_result(function_name, all_passed);
}
