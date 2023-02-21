/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeliky <almeliky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:06:55 by almeliky          #+#    #+#             */
/*   Updated: 2023/02/17 16:09:52 by almeliky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<ctype.h>

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

/*int main()
{
    printf("%d - my\n, %d - off", ft_isalnum('!'), isalnum('!'));
    return (0);
}*/