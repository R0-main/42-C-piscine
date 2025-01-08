/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:53:43 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/23 13:12:34 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (
			base[i] == '+'
			|| base[i] == '-'
			|| base[i] <= 32
			|| base[i] == 127
		)
			return (1);
		while (base[j])
		{
			if (i != j && base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	long int	base_length;

	n = nbr;
	base_length = ft_strlen(base);
	if (
		!base
		|| base_length == 1
		|| ft_check_base(base)
	)
		return ;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n < base_length)
		write(1, &base[n], 1);
	if (n >= base_length)
	{
		ft_putnbr_base(n / base_length, base);
		ft_putnbr_base(n % base_length, base);
	}
}

//#include <stdio.h>
//#include <stdlib.h>
//
//int	main(int n, char **argv)
//{
//	if (n <= 0)
//		return (0x0);
//	ft_putnbr_base(atoi(argv[1]), argv[2]);
//}
