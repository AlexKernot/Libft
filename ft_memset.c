/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:28:29 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 21:45:13 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*pointer;
	size_t	i;

	i = 0;
	pointer = (unsigned char *)s;
	while (i < n && pointer[i] != 0)
	{
		pointer[i] = c;
		i++;
	}
	return (s);
}
