/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:43:36 by natvazqu          #+#    #+#             */
/*   Updated: 2023/12/01 01:10:51 by alcarden         ###   ########.fr       */
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
// posible fallo en el strlen
// Comprobar si necesita cambio en el malloc antes del bucle while
/*
if (s1[0] == '\0' && set[0] == '\0')
	{
		str = malloc(sizeof(char));
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
*/