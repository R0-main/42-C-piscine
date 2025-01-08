/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:46:18 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/15 15:31:08 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9)
		return (ft_putchar(nb + '0'));
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first < 99)
	{	
		second = first + 1;
		while (second <= 99)
		{
			if (first <= 9)
				ft_putchar('0');
			ft_putnbr(first);
			ft_putchar(' ');
			if (second <= 9)
				ft_putchar('0');
			ft_putnbr(second);
			if (first < 98 || second <= 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}

//int main(void)
//{
//	ft_putnbr(42);
//	ft_print_comb2();
//}
