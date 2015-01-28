
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int ft_strlen(char *truc);
int ft_isdigit(int machin);
int ft_isascii(int machin);
int ft_isprint(int machin);
int ft_isalpha(int machin);
int ft_puts(const char *s);
void ft_bzero(void *s, size_t n);
char *ft_strcat(char *s1, char *s2);

int main() {
	int ret;
	char test[7] = "testooo";
	/* char *s = (char *)malloc(5); */
	char *n = NULL;
	/* int i; */
	/* for (i = 0; i < 5; ++i) */
	/* 	s[i] = 'a'; */

	(void)ret;
	(void)n;
	(void)test;
	/** STRLEN **/

	/* printf("strlen : %d\n", (int)strlen("POPOPOOOO")); */
	/* printf("asm strlen : %d\n", ft_strlen("POPOPOOOO")); */
	/* printf("strlen : %d\n", (int)strlen("")); */
	/* printf("asm strlen : %d\n", ft_strlen("")); */
	/* printf("strlen : %d\n", (int)strlen(test)); */
	/* printf("asm strlen : %d\n", ft_strlen(test)); */
	/* printf("strlen : %d\n", (int)strlen(n)); */ //SEGFAULT
	/* printf("asm strlen : %d\n", ft_strlen(n)); */ //SEGFAULT

	/** ISDIGIT **/

	// printf("isdigit : %d\n", isdigit('a'));
	// printf("isdigit : %d\n", isdigit('9'));
	// printf("asm isdigit : %d\n", ft_isdigit('a'));
	// printf("asm isdigit : %d\n", ft_isdigit('9'));

	/** ISASCII **/

	// printf("isascii : %d\n", isascii(-1));
	// printf("isascii : %d\n", isascii(' '));
	// printf("asm isascii : %d\n", ft_isascii(-1));
	// printf("asm isascii : %d\n", ft_isascii(' '));


	/** ISPRINT **/

	// printf("isprint : %d\n", isprint(-1));
	// printf("isprint : %d\n", isprint(' '));
	// printf("isprint : %d\n", isprint('~'));
	// printf("isprint : %d\n", isprint(127));
	// printf("asm isprint : %d\n", ft_isprint(-1));
	// printf("asm isprint : %d\n", ft_isprint(' '));
	// printf("asm isprint : %d\n", ft_isprint('~'));
	// printf("asm isprint : %d\n", ft_isprint(127));

	/** ISALPHA **/

	/* printf("isalpha : %d\n", isalpha('[')); */
	/* printf("isalpha : %d\n", isalpha(' ')); */
	/* printf("isalpha : %d\n", isalpha('a')); */
	/* printf("isalpha : %d\n", isalpha('Z')); */
	/* printf("asm isalpha : %d\n", ft_isalpha('[')); */
	/* printf("asm isalpha : %d\n", ft_isalpha(' ')); */
	/* printf("asm isalpha : %d\n", ft_isalpha('a')); */
	/* printf("asm isalpha : %d\n", ft_isalpha('Z')); */

	/** FT_PUTS **/
	/* printf("TEST FT-PUTS\n"); */

	/* printf("mine :\n"); */
	/* ret = ft_puts(s); */
	/* printf("ret = %d\n", ret); */
	/* printf("real :\n"); */
	/* ret = puts(s); */
	/* printf("ret = %d\n", ret); */

	/* printf("*****************\n"); */

	/* printf("mine :\n"); */
	/* ret = ft_puts(test); */
	/* printf("ret = %d\n", ret); */
	/* printf("real :\n"); */
	/* ret = puts(test); */
	/* printf("ret = %d\n", ret); */

	/* printf("*****************\n"); */

	/* printf("mine :\n"); */
	/* ret = ft_puts("test"); */
	/* printf("ret = %d\n", ret); */
	/* printf("real :\n"); */
	/* ret = puts("test"); */
	/* printf("ret = %d\n", ret); */

	/* printf("*****************\n"); */

	/* printf("mine :\n"); */
	/* ret = ft_puts(n); */
	/* printf("ret = %d\n", ret); */
	/* printf("real :\n"); */
	/* ret = puts(n); */
	/* printf("ret = %d\n", ret); */

	/* printf("*****************\n"); */

	/* printf("mine :\n"); */
	/* ret = ft_puts(""); */
	/* printf("ret = %d\n", ret); */
	/* printf("real :\n"); */
	/* ret = puts(""); */
	/* printf("ret = %d\n", ret); */

	/* ret = ft_puts("yolo"); */
	/* printf("ret = %d\n", ret); */

	/* ret = ft_puts("what???"); */
	/* printf("ret = %d\n", ret); */

	/** FT_BZERO **/

	/* char	s0[4] = "yolo"; */

	/* printf("before : %s<\n", s0); */
	/* ft_bzero(s0, 4); */
	/* printf("after : %s<\n", s0); */

	/** FT_STRCAT **/

	/* printf("ici\n"); */
	char	scat1[13] = "hashtag\0";
	char	scat2[5] = "Yolo\0";
	char	*retCat;

	/* printf("ici\n"); */
	/* ft_strcat(scat1, scat2); */
	retCat = ft_strcat(scat1, scat2);
	/* printf("ici\n"); */
	printf("ret = %s<\nscat1 = %s<\nlen = %d\n", retCat, scat1, (int)strlen(scat1));
	/* printf("scat1 = %s<\n", scat1); */
	/* printf("ici\n"); */

	return 0;
}
