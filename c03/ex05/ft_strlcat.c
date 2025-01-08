/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:28:01 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/22 09:56:33 by rguigneb         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dest_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size + size);
	i = 0;
	while (i < size - dest_size - 1 && src[i])
	{
		dest[i + dest_size] = src[i];
		i++;
	}
	dest[i + dest_size] = '\0';
	if (size < dest_size)
		return (src_size + size);
	else
		return (src_size + dest_size);
}

//#include <stdio.h>
//#include "bsd/string.h"
//int	main(void)
//{
//
//	char first[50] = "This is ";
//	char last[] = "a potentially long string";
//	int r;
//	int size = 16;
//	char buffer[500];
//
//	strcpy(buffer,first);
//	
//	printf("%d\n", ft_strlen(buffer));
//	r = strlcat(buffer,last,size);
//	
//	printf("%s\n", buffer); 
//	printf("Value returned: %d\n",r);
//	if( r > size )
//	    puts("String truncated");
//	else
//	    puts("String was fully copied");
//}
