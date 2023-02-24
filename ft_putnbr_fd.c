/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almeliky <almeliky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:39:34 by almeliky          #+#    #+#             */
/*   Updated: 2023/02/24 18:40:49 by almeliky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;
	char		c;

	num = n;
	if (fd < 0)
		return ;
	if (num < 0)
	{
		write (fd, "-", 1);
		num = -num;
	}
	if (num >= 0)
	{
		c = '0' + (int)(num % 10);
		if (n == 0)
		{
			write(fd, "0", 1);
			return ;
		}
		ft_putnbr_fd(num / 10, fd);
		write(fd, &c, 1);
	}
}

int main()
{
	ft_putnbr_fd(1, 1);
}