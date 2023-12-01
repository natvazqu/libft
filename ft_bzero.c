/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:58:18 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 17:58:21 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*s2;
	unsigned int	count;

	s2 = s;
	count = 0;
	while (count < n)
	{
		s2[count] = 0;
		count++;
	}
}
