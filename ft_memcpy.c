/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:59:25 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 17:59:27 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		count;
	const char	*src_char;
	char		*dest_char;

	count = 0;
	src_char = (char *)src;
	dest_char = (char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (count < n)
	{
		dest_char[count] = src_char[count];
		count++;
	}
	return (dest);
}
