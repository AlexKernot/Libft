/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:56:14 by akernot           #+#    #+#             */
/*   Updated: 2023/02/23 15:05:10 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*char_s1;
	unsigned char	*char_s2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	char_s1 = (unsigned char *)s1;
	char_s2 = (unsigned char *)s2;
	while (i < n && (char_s1[i] != '\0' && char_s2[i] != '\0'))
	{
		if (char_s1[i] == char_s2[i])
		{
			i++;
			continue ;
		}
		return (char_s1[i] - char_s2[i]);
	}
	return (0);
}
