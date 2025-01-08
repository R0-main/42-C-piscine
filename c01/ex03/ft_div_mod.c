/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:12:49 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/15 14:36:45 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//#include <stdio.h>
//int   main(void)
//{
//
//	int	divVal;
//	int	modVal;
//	int     *div;
//	int     *mod;
//	int     a;
//	int     b;
//	
//	a = 14;
//	b = 3;
//
//	div = &divVal;
//	mod = &modVal;
//	
//	ft_div_mod(a, b, div, mod);
//	
//	printf("a : %d | b : %d\ndiv : %d | mod : %d", a, b, divVal, modVal);
//
//}
