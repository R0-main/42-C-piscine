/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:35:25 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/31 16:44:28 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_fibonacci(46));
//	printf("%d\n", ft_fibonacci(1));
//	printf("%d\n", ft_fibonacci(2));
//	printf("%d\n", ft_fibonacci(3));
//	printf("%d\n", ft_fibonacci(4));
//	printf("%d\n", ft_fibonacci(5));
//	printf("%d\n", ft_fibonacci(6));
//	printf("%d\n", ft_fibonacci(7));
//	printf("%d\n", ft_fibonacci(8));
//}
