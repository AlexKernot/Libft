/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.ft>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:48:14 by akernot           #+#    #+#             */
/*   Updated: 2023/03/06 20:04:20 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_strncpy(char *dst, const char *src, size_t sz);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	length;
	
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	length = len_src;
	if (length > size)
		length = size - 1;
	ft_strncpy(dst, src, length);
	dst[length] = 0;
	return (len_src);
}
/*
int main(void)
{
	char *str = "the cake is a lie !";
	char buff1[0xF00] = "there is no stars in the sky";
	size_t max = strlen("the cake is a lie !") + 4;
	size_t r1 = ft_strlcpy(buff1, str, max);
	printf("%s\n%ld\n", buff1, r1);
}*/