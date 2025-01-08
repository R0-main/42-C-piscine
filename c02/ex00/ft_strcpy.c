/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 09:54:59 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/16 11:28:27 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}

//#include <stdio.h>
//int	main(void)
//{
//	char	str[5] = "12345";
//	char	dest[5] = "fqffq";
//	
// 	ft_strcpy(dest, str);
//	printf("%s", dest);	
//}
