/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:44:08 by akernot           #+#    #+#             */
/*   Updated: 2023/03/04 15:46:40 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	ft_strdel(char **as)
{
	if (as == NULL)
		return ;
	if (*as == NULL)
		return ;
	free(*as);
	*as = NULL;
}
