/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:10:38 by akernot           #+#    #+#             */
/*   Updated: 2023/02/27 09:14:25 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int		*memory;
	size_t	i;

	i = 0;
	memory = (int *)malloc(sizeof(int) * size);
	if (!memory)
		return (NULL);
	while (i < size)
	{
		memory[i] = 0;
		i++;
	}
	return ((void *)memory);
}
