/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakal <ecakal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:21:11 by ecakal            #+#    #+#             */
/*   Updated: 2025/07/10 21:28:27 by ecakal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_char;

	last_char = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			last_char = (char *)str;
		str++;
	}
	if (last_char)
		return (last_char);
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return (NULL);
}
