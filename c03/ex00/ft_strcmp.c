/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:38:48 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/18 10:52:40 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>
//int	main(void)
//{
//	char	*str1 = "AA";
//	char	*str2 = "A";
//
//	printf("ft_strcmp : %d\nstrcmp : %d", 
//	ft_strcmp(str1, str2), strcmp(str1, str2));
//}
