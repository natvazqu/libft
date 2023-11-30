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
	int		start;
	int		end;
	size_t	cntr;

	if (!str || !set)
		return (0);
	start = 0;
	cntr = 0;
	while (str[start] != '\0' && ft_strchr(set, str[start]) != NULL)
		start++;
	end = ft_strlen(str);
	while (end > start && ft_strchr(set, str[end]) != NULL)
		end--;
	return (ft_substr(str, start, end - start + 1));
}
