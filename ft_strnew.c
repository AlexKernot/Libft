/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:16:37 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 15:41:44 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t		i;
	char		*new_string;

	i = 0;
	new_string = (char *)malloc(sizeof(char) * size);
	while (i < size)
	{
		new_string[i] = 0;
		i++;
	}
	return (new_string);
}
