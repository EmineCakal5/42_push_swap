/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakal <ecakal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:15:14 by ecakal            #+#    #+#             */
/*   Updated: 2025/09/15 18:16:03 by ecakal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_lstsize(t_list *lst)
{
	int counter;
	
	counter = 0;
	while(lst != NULL)
	{
		counter++;
		lst = lst -> next;
	}
	return counter;
}