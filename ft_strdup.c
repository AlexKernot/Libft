/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:13:34 by akernot           #+#    #+#             */
/*   Updated: 2023/02/23 15:21:08 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*new_string;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	new_string = (char *)malloc(size * sizeof(char) + 1);
	if (new_string == NULL || size < 1)
		return (NULL);
	while (i < size && s[i] != 0)
	{
		new_string[i] = s[i];
		i++;
	}
	new_string[i] = 0;
	return (new_string);
}
