/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:26:19 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/19 11:26:53 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] >= 127)
			return (0);
	}
	return (1);
}

//#include <stdio.h>
//int   main(void)
//{
//      char    *str = "fqwfqf qfqfQ";
//      char    str1[2] = {'c', 127};
//      char    *str2 = "FWFFAFFAWFAFAFFF";
//      char    *str3 = "";
//
//      printf("%d\n",ft_str_is_printable(str));
//      printf("%d\n",ft_str_is_printable(str1));
//      printf("%d\n",ft_str_is_printable(str2));
//      printf("%d\n",ft_str_is_printable(str3));
//}
