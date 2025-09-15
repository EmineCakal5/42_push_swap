/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakal <ecakal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 18:28:28 by ecakal            #+#    #+#             */
/*   Updated: 2025/07/12 20:27:22 by ecakal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (ft_strlen(needle) > ft_strlen(haystack) || ft_strlen(needle) > len)
		return (NULL);
	while (haystack[i] && (i + j < len) && needle[j])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j < len) && needle[j])
		{
			if (j == ft_strlen(needle) - 1)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
