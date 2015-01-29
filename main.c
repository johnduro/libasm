
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *truc);
int ft_isdigit(int machin);
int ft_isascii(int machin);
int ft_isprint(int machin);
int ft_isalpha(int machin);
int ft_puts(const char *s);
void ft_bzero(void *s, size_t n);
char *ft_strcat(char *s1, char *s2);
void *ft_memcpy(void *dest, void *src, size_t n);
void *ft_memset(void *dest, int c, size_t len);
char *ft_strdup(const char *src);
int ft_tolower(int c);
int ft_toupper(int c);

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
	/* printf("strlen : %d\n", (int)strlen(n)); SEGFAULT */
	/* printf("asm strlen : %d\n", ft_strlen(n)); SEGFAULT */

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

	/* char	scat1[13] = "hashtag\0"; */
	/* char	scat2[5] = "Yolo\0"; */
	/* char	*retCat; */

	/* retCat = ft_strcat(scat1, scat2); */
	/* printf("ret = %s<\nscat1 = %s<\nlen = %d\n", retCat, scat1, (int)strlen(scat1)); */

	/** FT_MEMCPY **/

	/* char memcp[10] = "trololol\0"; */
	/* char src[5] = "Yolo\0"; */

	/* printf("before : %s<\n", memcp); */
	/* ft_memcpy(memcp, src, 4); */
	/* printf("res : %s<\n", memcp); */


	/** FT_MEMCPY **/

	/* char memset1[10] = "trololol\0"; */
	/* char memset2[5] = "Yolo\0"; */

	/* printf("before : >%s<\n>%s<\n", memset1, memset2); */
	/* ft_memset(memset1, 'a', 8); */
	/* ft_memset(memset2, 'b', 4); */
	/* printf("after : >%s<\n>%s<\n", memset1, memset2); */

	/** FT_STRDUP **/

	/* char sdup[10] = "trololol\0"; */
	/* char *dest; */

	/* dest = ft_strdup(sdup); */
	/* write(1, dest, 8); */
	/* write(1, "\n", 1); */
	/* printf("ft_strdup: %s<\n", dest); */
	/* free(dest); */

	/** FT_TOLOWER **/

	char c1 = 'A';
	char c2 = 'b';
	char c3 = ';';

	c1 = ft_tolower(c1);
	c2 = ft_tolower(c2);
	c3 = ft_tolower(c3);
	printf("c1: %c\nc2: %c\nc3: %c\n", c1, c2, c3);

	/** FT_TOUPPER **/

	char u1 = 'A';
	char u2 = 'b';
	char u3 = ';';

	u1 = ft_toupper(u1);
	u2 = ft_toupper(u2);
	u3 = ft_toupper(u3);
	printf("u1: %u\nu2: %u\nu3: %u\n", u1, u2, u3);
	return 0;
}
