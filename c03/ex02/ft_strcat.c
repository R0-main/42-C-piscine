/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:57:05 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/18 11:13:07 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i ++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

//#include <string.h>
//#include <stdio.h>
//int	main(void)
//{
//	char	str1[50] = "Char 1 is here";
//	char	str2[50] = "Appened";
//
//	strcat(str1, str2);
//
//	printf("%s\n", str1);
//
//	char	str11[50] = "Char 1 is here";
//	char	str22[50] = "Appened";
//
//	ft_strcat(str11, str22);
//
//	printf("%s", str11);
//}
