/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndauteui <ndauteui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 13:16:11 by ndauteui          #+#    #+#             */
/*   Updated: 2015/03/23 15:45:24 by mle-roy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_asm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <ctype.h>

size_t	rand_str(char *s, size_t max_size)
{
	int		i;

	i = 0;
	max_size = rand() % max_size;
	while ((size_t)i < max_size)
	{
		s[i] = (char)((rand() % 90) + 30);
		i++;
	}
	s[i] = '\0';

	return (max_size);
}

int		main(int argc, char **argv)
{
	int 	i;
	char 	j;
	int 	error;
	char	*str1;
	char	*str2;
	char	*test1;
	char	*test2;
	char	*s_cat1;
	char	*s_cat2;

	printf("----- Partie 1 -----\n\n");

	str1 = malloc(sizeof(char) * 9);
	str2 = malloc(sizeof(char) * 9);
	i = 0;
	j = '1';
	while (j <= '9')
	{
		str1[i] = j;
		str2[i] = j;
		i++;
		j++;
	}
	ft_bzero((void *)str1, 5);
	bzero((void *)str2, 5);
	i = 0;
	error = 0;
	while (i < 10)
	{
		if (str1[i] != str2[i])
			error++;
		i++;
	}
	printf("ft_bzero: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	s_cat1 = malloc(sizeof(char) * 50);
	s_cat2 = malloc(sizeof(char) * 50);
	test1 = malloc(sizeof(char) * 100);
	test2 = malloc(sizeof(char) * 100);
	i = 0;
	error = 0;
	while (i < 1000000)
	{
		bzero(s_cat1, 50);
		bzero(s_cat2, 50);
		bzero(test1, 100);
		bzero(test2, 100);
		rand_str(s_cat1, 50);
		rand_str(s_cat2, 50);
		test1 = strcpy(test1, s_cat1);
		test2 = strcpy(test2, s_cat1);

		test2 = ft_strcat(test2, s_cat2);
		test1 = strcat(test1, s_cat2);

		if (strcmp(test1, test2))
		{
			if (error < 10)
				printf("[%d]\n [%d]them : %s\n[%d]mine : %s\n", error, strlen(test1), test1, strlen(test2), test2);
			error++;
		}
		i++;
	}
	printf("ft_strcat: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");


	error = 0;
	i = -2000000;
	while ( i <= 2000000 )
	{
		if (ft_isalnum(i) != isalnum(i))
			error++;
		i++;
	}
	printf("ft_isalnum: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	error = 0;
	i = -2000000;
	while ( i <= 2000000 )
	{
		if (ft_isalpha(i) != isalpha(i))
			error++;
		i++;
	}
	printf("ft_isalpha: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	error = 0;
	i = -2000000;
	while ( i <= 2000000 )
	{
		if (ft_isascii(i) != isascii(i))
			error++;
		i++;
	}
	printf("ft_isascii: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	error = 0;
	i = -2000000;
	while ( i <= 2000000 )
	{
		if (ft_isdigit(i) != isdigit(i))
			error++;
		i++;
	}
	printf("ft_isdigit: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	error = 0;
	i = -2000000;
	while ( i <= 2000000 )
	{
		if (ft_isprint(i) != isprint(i))
			error++;
		i++;
	}
	printf("ft_isprint: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	error = 0;
	i = -2000000;
	while ( i <= 2000000 )
	{
		if (ft_tolower(i) != tolower(i))
			error++;
		i++;
	}
	printf("ft_tolower: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	error = 0;
	i = -2000000;
	while ( i <= 2000000 )
	{
		if (ft_toupper(i) != toupper(i))
			error++;
		i++;
	}
	printf("ft_toupper: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	ft_puts(NULL);
	ft_puts("ft_puts: \033[32mOK !\033[0m");

	printf("\n----- Partie 2 -----\n\n");

	test1 = malloc(sizeof(char) * 50);
	error = 0;
	i = 0;
	while ( i < 1000000 )
	{
		rand_str(test1, 50);

		if (strlen(test1) != ft_strlen(test1))
			error++;

		memset(test1, 0, 50);
		i++;
	}
	printf("ft_strlen: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	i = 0;
	error = 0;
	while ( i < 1000000 )
	{
		rand_str(test1, 50);

		if (memset(test1, 'X', 12) != ft_memset(test1, 'X', 12))
			error++;

		memset(test1, 0, 50);
		i++;
	}
	printf("ft_memset: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	i = 0;
	error = 0;
	while ( i < 1000000 )
	{
		rand_str(test1, 50);
		rand_str(test2, 50);

		if (memcpy(test1, test2, 12) != ft_memcpy(test1, test2, 12))
			error++;

		memset(test1, 0, 50);
		i++;
	}
	free(test2);
	printf("ft_memcpy: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");

	i = 0;
	error = 0;
	while ( i < 1000000 )
	{
		rand_str(test1, 50);

		if (strcmp(strdup(test1), ft_strdup(test1)) != 0)
			error++;

		memset(test1, 0, 50);
		i++;
	}
	printf("ft_strdup: ");
	if (error)
		printf("\033[31m%d errors found !\033[0m\n", error);
	else
		printf("\033[32mOK !\033[0m\n");


	printf("\n----- Partie 3 -----\n\n");
	printf("Testing ft_cat : \n");
	char bool = 1;
	if (argc > 1)
	{
		int fd;

		if ((fd = open(argv[1], O_RDONLY)) > 0)
		{
			printf("Opening of %s ok, dumping file :\n--------------------------------\n", argv[1]);
			ft_cat(fd);
			if (close(fd) < 0)
			{
				return (-3);
			}
			bool = 0;
		}
		else
			printf("%s is not a valid file\n", argv[1]);

	}
	if (bool)
	{
		printf("No file, reading sur 0 : \n");
		ft_cat(0);
	}
	return (0);
}
