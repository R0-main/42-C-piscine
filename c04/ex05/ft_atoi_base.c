/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:48:19 by rguigneb          #+#    #+#             */
/*   Updated: 2024/09/02 13:30:02 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1 ;
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

int	ft_find_index(char *base, char c)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == c)
			return (i);
	}
	return (-1);
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



int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	r;
	int	sign;
	int	base_size;
	int	index;

	i = -1;
	r = 0;
	sign = 1;
	base_size = ft_check_base(base);
	if (!base || ft_check_base(base) == 1 || base_size <= 1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	index = ft_find_index(base, str[i]);
	while (index && str[i])
	{
		index = ft_find_index(base, str[i]);
		r = r * base_size + ft_find_index(base, str[i]);
		i++;
	}
	return (r * sign);
}

#include <stdio.h>
int	main(int n, char **argv)
{
	(void)n;
	printf(`"%d", ft_atoi_base(argv[1], argv[2]));
}
