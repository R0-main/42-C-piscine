/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:26:19 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/16 13:32:39 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
	}
	return (1);
}

//#include <stdio.h>
//int   main(void)
//{
//      char    *str = "fqwfqfqfqfQ";
//      char    *str1 = "Qfqfwfqfqfq";
//      char    *str2 = "FWFFAFFAWFAFAFFF";
//      char    *str3 = "";
//
//      printf("%d\n",ft_str_is_uppercase(str));
//      printf("%d\n",ft_str_is_uppercase(str1));
//      printf("%d\n",ft_str_is_uppercase(str2));
//      printf("%d\n",ft_str_is_uppercase(str3));
//}
