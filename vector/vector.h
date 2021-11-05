/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:28:26 by tbousque          #+#    #+#             */
/*   Updated: 2021/11/05 19:40:33 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include <stdlib.h>
# include "../libft.h"

typedef struct s_vec
{
	size_t	capacity;
	size_t	size;
	void	*data;
}	t_vec;

void	*ft_vecpush(t_vec *vec, void *mem, size_t size);
t_vec	ft_vecnew(void);
#endif
