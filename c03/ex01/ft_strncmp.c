/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:38:48 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/21 19:07:35 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] && i < n) || (s2[i] && i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>
//int	main(void)
//{
//	char	*str1 = "AA";
//	char	*str2 = "AQQ";
//
//	printf("ft_strcmp : %d\nstrcmp : %d", 
//	ft_strncmp(str1, str2, 3), strncmp(str1, str2, 3));
//}
