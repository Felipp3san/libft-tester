/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:32:01 by fde-alme          #+#    #+#             */
/*   Updated: 2025/04/19 20:37:08 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstdelone_test()
{
	t_list	*elem1;
	t_list	*elem2;

	elem1 = (t_list *) malloc(sizeof(t_list));
	elem2 = (t_list *) malloc(sizeof(t_list));
	elem1->content = "First node";
	elem2->content = "Second node";

	elem1->next = elem2;
}
