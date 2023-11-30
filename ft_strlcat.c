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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	idest;
	unsigned int	isrc;
	unsigned int	destsize;
	unsigned int	srcsize;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
		idest++;
	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (size <= destsize)
		return (srcsize + size);
	while (src[isrc] != '\0' && isrc < (size - destsize - 1))
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (srcsize + destsize);
}
