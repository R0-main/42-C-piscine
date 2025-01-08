/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:28:01 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/25 17:59:30 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return ((void *)0);
}

//#include <stdio.h>
//#include <string.h>
//int	main(void)
//{
//	char	*str1 = "Voici un text";
//	char	*str2 = "i";
//
//	printf("%s\n", strstr(str1, str2));
//
//	char	*str11 = "Voici un text";
//	char	*str22 = "i";
//
//	printf("%s", ft_strstr(str11, str22));
//
//}
