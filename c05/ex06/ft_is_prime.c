/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:13:00 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/27 09:51:40 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int	main(void)
//{
//	int	i;
//
//	i = 0;
//	while (++i < 1000)
//		printf("%d : %d\n", i, ft_is_prime(i));
//	printf("%d : %d\n", 2147483647, ft_is_prime(2147483647));
//}
