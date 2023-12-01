/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:43:36 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/24 18:43:38 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int		size;
	char	*string;

	if (!str || !set)
		return (0);
	if (str[0] == '\0' && set[0] == '\0')
	{
		string = malloc(sizeof(char));
		if (!string)
			return (0);
		string[0] = '\0';
		return (string);
	}
	while (*str && ft_strchr(set, *str))
		str++;
	size = ft_strlen(str);
	while (size > 0 && ft_strchr(set, str[size]))
		size--;
	string = ft_substr(str, 0, (size_t)size + 1);
	return (string);
}
