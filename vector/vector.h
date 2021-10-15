/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbousque <tbousque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:28:26 by tbousque          #+#    #+#             */
/*   Updated: 2021/10/12 21:19:25 by tbousque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# include <stdlib.h>
# include "../libft.h"
# define VECTOR_H
struct s_vec
{
    size_t capacity;
    size_t size;
    void *data;
} typedef   t_vec;

#endif