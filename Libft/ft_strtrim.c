/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakal <ecakal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:59:29 by ecakal            #+#    #+#             */
/*   Updated: 2025/07/10 20:37:27 by ecakal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		first_index;
	int		last_index;

	first_index = 0;
	while (s1[first_index] && is_in_set(s1[first_index], set))
		first_index++;
	last_index = ft_strlen(s1) - 1;
	while (s1[last_index] && is_in_set(s1[last_index], set))
		last_index--;
	if (first_index > last_index)
		return (ft_strdup(""));
	result = ft_substr(s1, first_index, last_index - first_index + 1);
	return (result);
}
