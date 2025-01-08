/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:54:31 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/15 15:25:17 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_current_number(char array[], int len)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		ft_putchar(array[i]);
		i++;
	}
}

void	ft_loop_write(char array[], int value, int index, int max)
{
	char	n;

	n = value + 1;
	while (n <= '9')
	{
		if (
			(array[0] == (10 - max - 1) + '0' && index == max)
			|| (n == '9' && max == 0))
		{
			if (max == 0)
				array[0]++;
			ft_print_current_number(array, max);
			break ;
		}
		array[index] = n;
		if (index != max)
			ft_loop_write(array, n, index + 1, max);
		if (index == max || max == 0)
		{
			ft_print_current_number(array, max);
			if (array[0] != (10 - max) + '0' && array[0] <= '9')
				ft_print_separator();
		}
		n++;
	}
}

void	ft_print_combn(int n)
{
	char	a;
	char	array[10];

	a = '0' - 1;
	ft_loop_write(array, a, 0, n - 1);
}

//int	main(void)
//{
//	ft_print_combn(3);
//}
