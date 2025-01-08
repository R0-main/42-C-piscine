/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:55:39 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/19 11:32:16 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	char	*str1 = "fqwfq122fqf2";
//	char	*str2 = "1234567890";
//
//	printf("%d\n", ft_str_is_numeric(str1));
//	printf("%d\n", ft_str_is_numeric(str2));
//}
