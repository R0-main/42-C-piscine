/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:26:19 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/16 14:43:46 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
	return (str);
}

//#include <stdio.h>
//int   main(void)
//{
//	char    str[50] = "Bonhour FFFFF  les amis ...";
//
//	ft_strlowcase(str);
//      	
//	printf("%s\n",&str[0]);
//}
