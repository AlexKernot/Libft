/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:01:20 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 22:34:02 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char		*int_dest;
	const char		*int_src;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	int_dest = (char *)dest;
	int_src = (const char *)src;
	while (i < n && int_src[i] != 0)
	{
		int_dest[i] = int_src[i];
		i++;
	}
	return (dest);
}
