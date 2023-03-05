/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:01:01 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 16:23:24 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	unsigned int	size;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	size = (unsigned int)ft_strlen((char *)s);
	new_string = (char *)malloc(size * sizeof(char) + 1);
	if (!new_string)
		return (NULL);
	while (i < size)
	{
		new_string[i] = f(i, (char)s[i]);
		i++;
	}
	new_string[i] = 0;
	return (new_string);
}
