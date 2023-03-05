/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:33:12 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 22:43:27 by akernot          ###   ########.fr       */
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

	if (src == NULL || dest == NULL || n == 0)
		return (NULL);
	i = 0;
	int_dest = (int *)dest;
	int_src = (int *)src;
	temp_array = (int *)malloc(sizeof(int) * n);
	while (i < n && int_src[i] != 0)
	{
		temp_array[i] = int_src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		int_dest[i] = temp_array[i];
		i++;
	}
	int_dest[i] = 0;
	free(temp_array);
	return (dest);
}
