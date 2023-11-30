/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:02:20 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 18:02:22 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p_chr;

	p_chr = (unsigned char *)str;
	while (n--)
	{
		if (*p_chr != (unsigned char)c)
			p_chr++;
		else
			return (p_chr);
	}
	return (0);
}
