/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <rguigneb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:32:08 by rguigneb          #+#    #+#             */
/*   Updated: 2024/09/05 16:05:16 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_base(char *base);
int	correspond_to_the_base(char *str, char *base);
int	ft_strlen(char *str);
int	ft_find_index(char *base, char c);

int	number_len(long nbr, int base_len)
{
	int		len;
	long	nb;

	len = 0;
	if (nbr < 0)
	{
		nb = -nbr;
		len++;
	}
	else
		nb = nbr;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= base_len;
		len++;
	}
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	r;
	int	sign;
	int	base_size;

	i = 0;
	r = 0;
	sign = 1;
	base_size = ft_check_base(base);
	if (ft_check_base(base) == -1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_find_index(base, str[i]) != -1 && str[i])
	{
		r = r * base_size + ft_find_index(base, str[i]);
		i++;
	}
	return (r * sign);
}

char	*ft_putnbr_base(long nbr, char *base, char *result)
{
	long int	base_length;
	long int	i;
	long int	is_negative;
	long int	nb;

	nb = nbr;
	is_negative = 0;
	base_length = ft_check_base(base);
	i = number_len(nbr, base_length) - 1;
	result[i + 1] = '\0';
	if (nb == 0)
		result[i] = '0';
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		result[i--] = base[nb % base_length];
		nb = nb / base_length;
	}
	if (is_negative)
		result[i] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	decoded_int;
	char	*result;
	int		base_to_len;

	base_to_len = ft_check_base(base_to);
	if (
		ft_check_base(base_from) == -1
		|| base_to_len == -1
	)
		return (NULL);
	decoded_int = (long)ft_atoi_base(nbr, base_from);
	result = (char *)malloc(sizeof(char) * \
			(number_len(decoded_int, base_to_len) + 1));
	if (!result)
		return (NULL);
	return (ft_putnbr_base(decoded_int, base_to, result));
}

//#include <stdio.h>
//
//int	main(int argc, char **argv)
//{
//	int		i;
//	char	*result;
//
//	(void)argc;
//	i = 0;
//	result = ft_convert_base(argv[1], argv[2], argv[3]);
//	printf("%s", result);
//	free(result);
//}
