/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:03:36 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/27 19:14:50 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = nb - 1;
	r = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i >= 1)
	{
		r *= i;
		i--;
	}
	return (r);
}

//#include <stdio.h>
//int	main(void)
//{
//	printf("%d", ft_iterative_factorial(2));
//}
