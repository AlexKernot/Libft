/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:01:20 by akernot           #+#    #+#             */
/*   Updated: 2023/02/23 14:13:52 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
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
		i++;
	}
	return (dest);
}
