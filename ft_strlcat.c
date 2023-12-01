/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:00:18 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 18:00:21 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	unsigned int	idest;
	unsigned int	isrc;
	size_t			destlen;
	size_t			srclen;

	idest = 0;
	isrc = 0;
	while (dest[idest])
		idest++;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destsize <= destlen)
		return (srclen + destsize);
	while (src[isrc] && isrc < (destsize - destlen - 1))
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (destlen + srclen);
}
