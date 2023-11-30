/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:03:09 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 18:03:11 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count1;
	size_t	count2;

	count1 = 0;
	count2 = 0;
	if (needle[count1] == '\0')
		return ((char *)&haystack[count1]);
	while (haystack[count1] != '\0' && count1 < len)
	{
		while (((haystack[count1 + count2]) == (needle[count2]))
			&& count1 + count2 < len)
		{
			if (needle[count2 + 1] == '\0')
				return ((char *)&haystack[count1]);
			count2++;
		}
		count2 = 0;
		count1++;
	}
	return (0);
}
