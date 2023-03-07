/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.ft>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:46:29 by akernot           #+#    #+#             */
/*   Updated: 2023/03/07 20:46:29 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    ft_putchar_fd(char c, int fd);

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    if (s == NULL)
        return ;
    i = 0;
    while (s[i] != 0)
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}