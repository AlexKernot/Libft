/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:02:58 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 21:21:36 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *string);
void	*ft_memcpy(void *dest, void *src, size_t n);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		size1;
	int		size2;

	size1 = ft_strlen((char *)s1);
	size2 = ft_strlen((char *)s2);
	new_string = (char *)malloc(sizeof(char) * (size1 + size2));
	ft_memcpy((void *)new_string, (void *)s1, size1);
	ft_memcpy((void *)(&new_string[size1 - 1]), (void *)s2, size2);
	return (new_string);
}
