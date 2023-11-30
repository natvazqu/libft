/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:47:05 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/24 18:47:07 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	i = 0;
	result = (char *)str;
	if (!str || !f)
		return (0);
	result = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!result)
		return (0);
	while (i < (unsigned long)ft_strlen(str))
	{
		result[i] = f(i, str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
