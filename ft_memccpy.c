/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:21:56 by akernot           #+#    #+#             */
/*   Updated: 2023/02/23 14:31:52 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	int		*int_dest;
	int		*int_src;

	i = 0;
	int_dest = (int *)dest;
	int_src = (int *)src;
	while (i < n)
	{
		int_dest[i] = int_src[i];
		if (int_src[i] == c)
		{
			int_dest[++i] = 0;
			dest = (void *)&int_dest[i];
			return (dest);
		}
	}
	int_dest[n - 1] = 0;
	return (NULL);
}
