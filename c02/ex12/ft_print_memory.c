/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:59:26 by rguigneb          #+#    #+#             */
/*   Updated: 2024/08/18 15:49:47 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//char	hex_digit(int v)
//{
//	if (v >= 0 && v < 10)
//		return '0' + v;
//	else
//		return 'a' + v - 10;
//}
//
//
//void	print_address_hex(void* p0)
//{
//	int	i;
//	uintptr_t	p;
//	   
//	p = (uintptr_t)p0;
//	write(1, '0', 1);
//	write(1, 'x', 1);
//
//	i = sizeof(p) << 3 - 4;
//	while (i >= 0)
//	{
//		
//        	write(1, hex_digit((p >> i) & 0xf), 1);
//		i -= 4;
//	}
//}

//void	ft_putchar(char	c)
//{
//	write(1, &c, 1);
//}
//
//void	print_hex_representation(char c)
//{
//	char	c1;
//	char	c2;
//	
//	c1 = "0123456789abcdef"[c / 16];
//	c2 = "0123456789abcdef"[c % 16];
//	write(1, &c1, 2);
//	write(1, &c2, 2);
//}
//
//void	ft_putstr(char *str)
//{
//	int	i;
//
//	i = 0;
//	while (str[i])
//	{
//		ft_putchar(str[i]);
//		i++;
//	}
//}
//
//void	*ft_print_memory(void *addr, unsigned int size)
//{
//	int	i;
//	char	buffer;
//	int	writeAddress;
//
//	i = 0;
//	writeAddress = 1;
//	while (i < size)
//	{
//		buffer = *(char*)addr;
//		
//		if (i == 0) {
//			printf("%p", addr);
//			// write(1, "0x00055484", 10);
//			write(1, ": ", 2);
//			writeAddress = 0;			
//		}
//
//		if (i != 0 && i % 16 == 0)
//		{
//			ft_putchar('\n');	
//		}
//		if (i != 0 && i % 4 != 0)
//			ft_putchar(' ');
//		print_hex_representation(buffer);
//		//write(1, &buffer, 1);
//		addr += 1;
//		i++;
//	}
//}
//
//int	main(void)
//{		
//	char	*str = "Bonjour a tous";
//	void	*addr;
//
//
//	//printf("%p", &str[0]);
//	addr	= &str[0];
//	//print_adress_hex(addr);	
//	ft_print_memory(addr, 13); 
//}
