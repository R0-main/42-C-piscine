/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:10:43 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/16 13:24:51 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	}
	return (1);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	*str = "fqwfqfqfqfQ";
//	char	*str1 = "Qfqfwfqfqfq";
//	char	*str2 = "fqwfqfqfqff";
//	char	*str3 = "";
//
//	printf("%d\n",ft_str_is_lowercase(str));
//	printf("%d\n",ft_str_is_lowercase(str1));
//	printf("%d\n",ft_str_is_lowercase(str2));
//	printf("%d\n",ft_str_is_lowercase(str3));
//}
