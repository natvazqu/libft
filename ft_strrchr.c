/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:01:09 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/12 18:01:12 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	while (count > 0 && s[count] != (char)c)
		count--;
	if (s[count] == (char)c)
		return ((char *)&s[count]);
	return (0);
}
