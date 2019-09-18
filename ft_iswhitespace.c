/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstiekem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:45:25 by dstiekem          #+#    #+#             */
/*   Updated: 2019/06/28 09:24:47 by dstiekem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhitespace(const char *str)
{
	if ((*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
				|| *str == '\r' || *str == '\f') && (*str))
		return (1);
	return (0);
}