/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:37:14 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/15 14:11:20 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//#include <stdio.h>
//int	main(void)
//{
//	int	*a;
//	int	*b;
//	int	intA;
//	int	intB;
//
//	intA = 5;
//	intB = 49;
//
//	a = &intA;
//	b = &intB;
//
//	ft_swap(a, b);
//
//	printf("a : %d | b : %d", *a, *b);
//
//}
