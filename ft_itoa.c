/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 02:39:38 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/30 22:48:47 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	str = ft_ullbase(ft_abs(n), "0123456789", 10, n < 0);
	if (str == NULL)
		return (NULL);
	return (str);
}
