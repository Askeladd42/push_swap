/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plam <plam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:58:08 by plam              #+#    #+#             */
/*   Updated: 2021/11/29 16:27:54 by plam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sc;

	if (!dest && !src && n > 0)
		return (NULL);
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	while (n--)
		*dst++ = *sc++;
	return (dest);
}
