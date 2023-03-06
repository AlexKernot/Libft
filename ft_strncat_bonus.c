/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:19:36 by akernot           #+#    #+#             */
/*   Updated: 2023/02/27 09:08:55 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strncat(char *dst, const char *src, size_t sz)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(dst);
	while (i < sz && src[i] != 0)
	{
		dst[size + i] = src[i];
		i++;
	}
	dst[size + i] = 0;
	return (dst);
}
