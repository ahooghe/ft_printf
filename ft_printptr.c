/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:45:33 by ahooghe           #+#    #+#             */
/*   Updated: 2023/01/23 16:47:08 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long input)
{
	if (input == 0)
	{
		ft_printstr("(nil)");
		return (5);
	}
	else
	{
		ft_printstr("0x");
		return (ft_printhex(input, 'x') + 2);
	}
}
