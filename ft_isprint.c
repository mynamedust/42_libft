/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeliky <almeliky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:26:29 by almeliky          #+#    #+#             */
/*   Updated: 2023/02/17 16:32:02 by almeliky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include<ctype.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int main()
{
    printf("%d - my\n, %d - off", ft_isprint(32), isprint(32));
    return (0);
}*/