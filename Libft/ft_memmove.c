/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakal <ecakal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:01:27 by ecakal            #+#    #+#             */
/*   Updated: 2025/07/10 19:27:18 by ecakal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*destmv;
	const unsigned char	*srcmv;

	if (!dest && !src)
		return (NULL);
	destmv = (unsigned char *)dest;
	srcmv = (const unsigned char *)src;
	i = 0;
	if (destmv == srcmv || len == 0)
		return (dest);
	if (destmv > srcmv && destmv < srcmv + len)
	{
		while (len--)
			destmv[len] = srcmv[len];
	}
	else
	{
		while (i < len)
		{
			destmv[i] = srcmv[i];
			i++;
		}
	}
	return (dest);
}
