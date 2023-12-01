/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:45:08 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/25 20:45:13 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	count;
	char	*res;

	len = ft_strlen(str);
	res = (char *)malloc(len * (sizeof(char)) + 1);
	if (!res)
		return (NULL);
	count = 0;
	while (count < len)
	{
		res[count] = str[count];
		count++;
	}
	res[count] = '\0';
	return (res);
}
