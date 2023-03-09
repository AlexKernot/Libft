/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.ft>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:46:29 by akernot           #+#    #+#             */
/*   Updated: 2023/03/07 20:46:29 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);

void    ft_putendl_fd(char *s, int fd)
{
    if (s == 0)
        return ;
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}