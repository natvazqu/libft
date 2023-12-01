/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:03:30 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 18:03:33 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int	num;
	int	count;
	int	sign;

	sign = 1;
	count = 0;
	num = 0;
	while ((c[count] >= 9 && c[count] <= 13) || c[count] == ' ')
		count++;
	if (c[count] == '-' || c[count] == '+')
	{
		if (c[count] == '-')
			sign = -1;
		count++;
	}
	while ((c[count] >= '0' && c[count] <= '9') && c[count] != '\0')
	{
		num = num * 10 + c[count] - '0';
		count++;
	}
	return (num * sign);
}
