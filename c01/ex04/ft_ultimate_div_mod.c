/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:38:06 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/15 16:04:12 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

//#include <stdio.h>
//int   main(void)
//{
//
//      int     a;
//      int     b;
//      int     *aptr;
//      int     *bptr;
//
//      a = 14;
//      b = 3;
//
//      aptr = &a;
//      bptr = &b;
//
//      ft_ultimate_div_mod(aptr, bptr);
//
//      printf("a : %d | b : %d", *aptr, *bptr);
//
//}
