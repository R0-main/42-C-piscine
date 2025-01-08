/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:26:19 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/16 14:40:09 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}

//#include <stdio.h>
//int   main(void)
//{
//	char    str[50] = "Bonhour les amis ...";
//
//	ft_strupcase(str);
//      	
//	printf("%s\n",&str[0]);
//}
