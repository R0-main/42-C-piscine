/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:20:43 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/19 11:23:31 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}	
	return (dest);
}

//#include <stdio.h>
//int	main(void)
//{
//
//
//	char	dest[50];
//	char	*src = "fqwfqfqffqfqfqw";
//	unsigned int n = 40;
//
//
//	ft_strncpy(dest, src, n);
//
//	printf("%s", dest);
//
//}
