/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 02:39:38 by tbousque          #+#    #+#             */
/*   Updated: 2022/01/14 21:49:36 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	char	*result;

	str = ft_ullbase(ft_abs(n), "0123456789", 10);
	if (str == NULL)
		return (NULL);
	result = ft_strjoin("-", str);
	free(str);
	if (result == NULL)
		return (NULL);
	return (str);
}
