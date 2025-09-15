/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakal <ecakal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:21:19 by ecakal            #+#    #+#             */
/*   Updated: 2025/09/15 18:12:37 by ecakal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_lstlast(t_list *lst) 
{
	int lastNode;

	while (lst->next)
	{
		lastNode = lst->next;
		lst->next;
	}
	return lastNode;
}