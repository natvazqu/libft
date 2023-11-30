/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:59:44 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 17:59:46 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*dest_char;
	const char	*src_char;

	i = 0;
	src_char = (char *)src;
	dest_char = (char *)dest;
	if (dest == NULL && src == NULL)
		return (dest);
	if (dest > src)
	{
		while (len-- > 0)
		{
			dest_char[len] = src_char[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest_char[i] = src_char[i];
			i++;
		}
	}
	return (dest);
}
