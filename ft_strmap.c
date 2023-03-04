/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:01:01 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 16:21:41 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_string;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen((char *)s);
	new_string = (char *)malloc(size * sizeof(char));
	while (i < size)
	{
		new_string[i] = f((char)s[i]);
		i++;
	}
	return (new_string);
}
