/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bunyod16 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:05:33 by bunyod16          #+#    #+#             */
/*   Updated: 2021/05/07 14:06:32 by bunyod16         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(const char *s);

size_t	strlcat(char *restrict dst,const char *restrict src,
size_t dstsize)
{
	size_t buffer;
	while(*dst != '\0')
		dst++;
	buffer = dstsize - ft_strlen(dst);
	while(*src != '\0' && buffer > 1)
	{
		*dst = *src;
		dst++;
		src++;
		buffer--;	
	}
	return (dstsize); 
}
