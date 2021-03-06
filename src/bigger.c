/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiivone <msiivone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 15:56:23 by msiivone          #+#    #+#             */
/*   Updated: 2020/01/07 12:04:41 by msiivone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	bigger(float x, float y)
{
	x = x < 0 ? -x : x;
	y = y < 0 ? -y : y;
	return (x > y ? x : y);
}
