/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbirtel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 19:57:31 by dbirtel           #+#    #+#             */
/*   Updated: 2017/04/08 06:09:55 by dbirtel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

t_coord		translate(t_coord o, t_coord v, double d)
{
	t_coord	t;

	t.x = o.x + v.x * d;
	t.y = o.y + v.y * d;
	t.z = o.z + v.z * d;
	return (t);
}
