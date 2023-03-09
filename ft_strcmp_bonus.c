/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:56:46 by akernot           #+#    #+#             */
/*   Updated: 2023/02/26 18:00:24 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	const unsigned char *c_s1;
	const unsigned char *c_s2;

	i = 0;
	c_s1 = (const unsigned char *)s1;
	c_s2 = (const unsigned char *)s2;
	if (*s1 == 0 || *s2 == 0)
		return (*c_s1 - *c_s2);
	while (c_s1[i] != 0 && c_s2[i] != 0)
	{
		if (c_s1[i] != c_s2[i])
			return (c_s1[i] - c_s2[i]);
		i++;
	}
	return (0);
}
