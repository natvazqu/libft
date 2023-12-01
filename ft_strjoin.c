/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:42:11 by natvazqu          #+#    #+#             */
/*   Updated: 2023/12/01 01:19:36 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*new_str;
	int		str1_len;
	int		str2_len;
	int		full_len;
	int		i;

	str1_len = ft_strlen(str1);
	str2_len = ft_strlen(str2);
	full_len = str1_len + str2_len + 1;
	new_str = malloc(full_len);
	i = 0;
	if (!new_str)
		return (NULL);
	while (i < str1_len)
	{
		new_str[i] = str1[i];
		i++;
	}
	while (i < full_len - 1)
	{
		new_str[i] = *str2++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
//	size = ft_strlen(s1) + ft_strlen(s2);
//	new = (char *)malloc(size * sizeof(char) + 1);
//	posible condiciones: strlen anterio y malloc anterio

/*compararlo con el siguiente flujo

while (i < size)
	{
		if (i < size - ft_strlen(s2))
			new[i] = s1[i];
		else
		{
			new[i] = s2[x];
			x++;
		}
		i++;
	}
*/