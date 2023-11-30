/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:35:41 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/24 17:35:45 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	i;
	size_t			s_len;

	i = 0;
	s_len = ft_strlen(str);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start;
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (sub_str == NULL || str == NULL)
		return (NULL);
	while (i < len)
	{
		sub_str[i] = str[start];
		start++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
