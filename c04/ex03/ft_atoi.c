/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:38:08 by rguigneb          #+#    #+#             */
/*   Updated: 2024/09/02 12:07:50 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	sign;

	i = 0;
	r = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		r = r * 10 + str[i] - '0';
		i++;
	}
	r *= sign;
	return (r);
}

//#include <stdio.h>
//#include <stdlib.h>
//int	main(int n, char **argv)
//{
//	(void)n;
//	printf("%d\n", ft_atoi(argv[1]));
//	printf("%d", atoi(argv[1]));
//}
