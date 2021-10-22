/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:19:27 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/22 23:34:59 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	char c;
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

void main(void)
{
	ft_putnbr_fd(-2147483647, 1);
}