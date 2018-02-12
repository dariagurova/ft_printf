/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgurova <dariagurova91@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 20:18:43 by dgurova           #+#    #+#             */
/*   Updated: 2018/02/08 20:18:46 by dgurova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./printf.h"

void		ft_percent(t_meta *specs)
{
	ft_putchar_fd('%', *specs->fd);
	*specs->ret = *specs->ret + 1;
}
