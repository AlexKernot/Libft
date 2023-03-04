/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:07:58 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 20:08:21 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	substring = (char *)malloc(sizeof(char) * len);
	if (!substring)
		return (NULL);
	i = start;
	while (i < len)
	{
		substring[i - start] = s[i];
		i++;
	}
	return (substring);
}
