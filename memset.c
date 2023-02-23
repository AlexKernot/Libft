/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:28:29 by akernot           #+#    #+#             */
/*   Updated: 2023/02/23 13:39:32 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memset(void *s, int c, size_t n)
{
	int		*pointer;
	size_t	i;

	i = 0;
	pointer = (int *)s;
	while (i < n)
	{
		pointer[i] = c;
		i++;
	}
	return (s);
}
