/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakal <ecakal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:08:15 by ecakal            #+#    #+#             */
/*   Updated: 2025/09/14 17:54:14 by ecakal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newNode = (t_list *)malloc(sizeof(t_list));
	if(!newNode)
		return NULL;
	newNode->data = *(int *) content;
	newNode->next = NULL;
	return newNode;
}
