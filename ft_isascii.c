/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeliky <almeliky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:10:19 by almeliky          #+#    #+#             */
/*   Updated: 2023/02/17 16:22:10 by almeliky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include<ctype.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main()
// {
//     printf("%d - my\n, %d - off", ft_isascii(-2), isascii(-2));
//     return (0);
// }