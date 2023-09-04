/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadikwu <adikwukaigama2018@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:56:03 by kadikwu           #+#    #+#             */
/*   Updated: 2023/07/29 10:56:04 by kadikwu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
#define FT_POINT_H

#include <unistd.h>
// datatype(struct) for the first variable(s_point)
// datatype(typedef) for the next variable(t_point)

typedef struct s_point
{
	int x;
	int y;
	char *str;
}				t_point;

void set_point(t_point *point);

#endif