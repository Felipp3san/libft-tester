/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:00:36 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 18:54:30 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

void	ft_lstadd_front_test()
{
	char	*function_name = "ft_lstadd_front";
	int		all_passed = 1;
	char	*content;

	t_list	*elem4;
	t_list	*elem3;
	t_list	*elem2;
	t_list	*elem1;
	t_list	*cursor;
	t_list	*firstNode;
	size_t	count = 0;

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

	firstNode = elem4;

	ft_lstadd_front(&firstNode, elem3);
	ft_lstadd_front(&firstNode, elem2);
	ft_lstadd_front(&firstNode, elem1);

	cursor = elem1;

	while (cursor)
	{
		if (strcmp((char *) cursor->content, "First node") 
			&& count == 0)
			all_passed = 0;
		if (strcmp((char *) cursor->content, "Fourth node") 
			&& count == 3)
			all_passed = 0;
		count++;
		cursor = cursor->next;
	}

	if (count != 4)
		all_passed = 0;

	ft_lstadd_front(NULL, NULL);

	print_result(function_name, all_passed);
}
