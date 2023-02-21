/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeliky <almeliky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:45:22 by almeliky          #+#    #+#             */
/*   Updated: 2023/02/21 22:14:51 by almeliky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	int		i;
	int		b;
	int		count;
	char	**arr;

	i = -1;
	count = 0;
	b = 0;
	while (str[++i])
	{
		if (str[i] == c)
			count++;
	}
	i = 0;
	arr = malloc(sizeof(char *) * count);
	while (i < count)
	{
		while (s[b++] != c)
			b++;
	}
}