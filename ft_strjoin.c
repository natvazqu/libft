/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:42:11 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/24 18:42:13 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char			*new_str;
	unsigned int	size;
	unsigned int	count1;
	unsigned int	count2;

	size = ft_strlen(str1) + ft_strlen(str2);
	new_str = (char *)malloc(size * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	count1 = 0;
	count2 = 0;
	while (count1 < size)
	{
		if (count1 < size - ft_strlen(str2))
			new_str[count1] = str1[count1];
		else
		{
			new_str[count1] = str2[count2];
			count2++;
		}
		count1++;
	}
	new_str[count1] = '\0';
	return (new_str);
}
