/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natvazqu <natvazqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:44:47 by natvazqu          #+#    #+#             */
/*   Updated: 2023/09/24 18:44:49 by natvazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_arr_num(const char *string, char c)
{
	int	count;
	int	arr_num;

	count = 0;
	arr_num = 0;
	while (string[count] != '\0')
	{
		if (string[count] != c && string[count] != '\0')
		{
			while (string[count] != c && string[count] != '\0')
				count++;
			arr_num++;
		}
		else
			count++;
	}
	return (arr_num);
}

static int	ft_get_wrd_len(const char *string, char c)
{
	int		wrd_len;

	wrd_len = 0;
	while (string[wrd_len] != '\0' && string[wrd_len] != c)
		wrd_len++;
	return (wrd_len);
}

static void	ft_free_matrix(char	**easy, int i)
{
	int	idx;

	idx = 0;
	while (idx < i)
	{
		free(easy[idx]);
		easy[idx] = NULL;
		idx++;
	}
}

static char	**ft_get_wrd(char const *str, char c, int arr_idx, int wrd_cnt)
{
	char	**cry;
	int		idx;

	idx = 0;
	cry = malloc((wrd_cnt + 1) * sizeof(char *));
	if (!cry)
		return (NULL);
	while (arr_idx < wrd_cnt)
	{
		if (str[idx] == c)
		{
			idx++;
			continue ;
		}
		cry[arr_idx] = ft_substr(str, idx, ft_get_wrd_len(str + idx, c));
		if (!cry[arr_idx])
			return (ft_free_matrix(cry, arr_idx), NULL);
		arr_idx++;
		idx += ft_get_wrd_len(str + idx, c);
	}
	cry[arr_idx] = NULL;
	return (cry);
}

char	**ft_split(char const *str, char c)
{
	char	**crying;
	int		arr_idx;
	int		wrd_cnt;

	wrd_cnt = ft_get_arr_num(str, c);
	if (str == NULL)
		return (NULL);
	arr_idx = 0;
	crying = ft_get_wrd(str, c, arr_idx, wrd_cnt);
	if (!crying)
		return (NULL);
	return (crying);
}
