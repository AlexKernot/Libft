/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:48:14 by akernot           #+#    #+#             */
/*   Updated: 2023/02/27 09:08:41 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	end;

	end = ft_strlen(dst);
	if (end > size || size == 0)
		return (size);
	while (i < size - 1 && src[i] != 0)
	{
		dst[end + i] = src[i];
		i++;
	}
	dst[end + i] = 0;
	return (i);
}
