/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_asm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-roy <mle-roy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 18:53:33 by mle-roy           #+#    #+#             */
/*   Updated: 2015/03/21 18:55:09 by mle-roy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ASM_H
# define LIBFT_ASM_H

#include <stdlib.h>

int ft_strlen(char *truc);
int ft_isdigit(int machin);
int ft_isascii(int machin);
int ft_isprint(int machin);
int ft_isalpha(int machin);
int ft_isalnum(int machin);
int ft_puts(const char *s);
void ft_bzero(void *s, size_t n);
char *ft_strcat(char *s1, char *s2);
void *ft_memcpy(void *dest, void *src, size_t n);
void *ft_memset(void *dest, int c, size_t len);
char *ft_strdup(const char *src);
int ft_tolower(int c);
int ft_toupper(int c);
void ft_cat(int fd);

#endif // ** LIBFT_ASM_H ** //
