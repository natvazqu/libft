/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:01:56 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 18:01:58 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while ((str1[i] != '\0' && str2[i] != '\0') && (i < n))
	{
		if (str1[i] == str2[i])
			counter++;
		if (str1[i] != str2[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	if (counter == n)
		return (0);
	else
		return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
