/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   main.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: srosu <srosu@student.42belgium.be>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/08 15:09:26 by srosu            #+#    #+#              */
/*   Updated: 2026/05/08 15:22:26 by srosu           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// Test %c : caractère
	ft_printf("ft_printf\n----------\n");
	ft_printf("Test %%c: %c\n", 'A');
	ft_printf("Test %%c avec nombre: %c\n", 65);
	ft_printf("\nprintf\n----------\n");
	printf("Test %%c: %c\n", 'A');
	printf("Test %%c avec nombre: %c\n\n", 65);
	// Test %s : chaîne de caractères
	ft_printf("ft_printf\n----------\n");
	ft_printf("Test %%s: %s\n", "Hello World");
	ft_printf("\nprintf\n----------\n");
	printf("Test %%s: %s\n", "Hello World");
	// Test %d et %i : entiers signés
	ft_printf("\nft_printf\n----------\nn");
	ft_printf("Test %%d positif: %d\n", 42);
	ft_printf("Test %%d négatif: %d\n", -42);
	ft_printf("Test %%d zéro: %d\n", 0);
	ft_printf("Test %%i: %i\n", 123);
	ft_printf("\nprintf\n----------\n");
	printf("Test %%d positif: %d\n", 42);
	printf("Test %%d négatif: %d\n", -42);
	printf("Test %%d zéro: %d\n", 0);
	printf("Test %%i: %i\n\n", 123);
	// Test %u : entier non signé
	ft_printf("ft_printf\n----------\n");
	ft_printf("Test %%u: %u\n", 42);
	ft_printf("Test %%u grand: %u\n", 4294967295U);
	ft_printf("\nprintf\n----------\n");
	printf("Test %%u: %u\n", 42);
	printf("Test %%u grand: %u\n\n", 4294967295U);
	// Test %x et %X : hexadécimal
	ft_printf("ft_printf\n----------\n");
	ft_printf("Test %%x: %x\n", 255);
	ft_printf("Test %%X: %X\n", 255);
	ft_printf("Test %%x zéro: %x\n", 0);
	ft_printf("\nprintf\n----------\n");
	printf("Test %%x: %x\n", 255);
	printf("Test %%X: %X\n", 255);
	printf("Test %%x zéro: %x\n\n", 0);
	// Test %% : pourcentage
	ft_printf("ft_printf\n----------\n");
	ft_printf("Test pourcentage %%\n");
	ft_printf("\nprintf\n----------\n");
	printf("Test pourcentage: %%\n\n");
	return (0);
}
