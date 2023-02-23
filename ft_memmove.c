/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:33:12 by akernot           #+#    #+#             */
/*   Updated: 2023/02/23 14:43:36 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

// Memmove copys n bytes of src into a temporary array then again into dest.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	int		*temp_array;
	int		*int_dest;
	int		*int_src;

	i = 0;
	int_dest = (int *)dest;
	int_src = (int *)src;
	temp_array = (int *)malloc(sizeof(int) * n);
	while (i < n)
	{
		temp_array[i] = int_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		int_dest[i] = int_dest[i];
		i++;
	}
	int_dest[i] = 0;
	return (dest);
}
