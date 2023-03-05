/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:41:16 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 21:57:55 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char		*pointer;
	size_t	i;

	pointer = (unsigned char *)s;
	i = 0;
	while (i < n && pointer[i] != 0)
	{
		pointer[i] = 0;
		i++;
	}
}
