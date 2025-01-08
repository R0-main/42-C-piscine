/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:30:25 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/31 10:03:51 by rguigneb         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb += 1;
	}
	return (1);
}

//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_find_next_prime(1));
//	printf("%d\n", ft_find_next_prime(2));
//	printf("%d\n", ft_find_next_prime(3));
//	printf("%d\n", ft_find_next_prime(4));
//	printf("%d\n", ft_find_next_prime(5));
//	printf("%d\n", ft_find_next_prime(6));
//	printf("%d\n", ft_find_next_prime(7));
//	printf("%d\n", ft_find_next_prime(5884));
//	printf("%d\n", ft_find_next_prime(1885112280));
//}
