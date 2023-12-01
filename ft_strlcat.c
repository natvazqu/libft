/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:00:18 by natvazqu          #+#    #+#             */
/*   Updated: 2023/12/01 01:19:42 by natvazqu         ###   ########.fr       */
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
/*
	arrastrar las condiciones del strlen + modificaciones con el mentor en 42
*/

/*
size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = ft_strlen((char *)dest);
	z = ft_strlen((char *)src);
	if (size <= y)
		return (z + size);
	while (src[i] != '\0' && i < (size - y - 1))
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (y + z);
}
*/
