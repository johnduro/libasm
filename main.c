
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int _ft_strlen(char *truc);
int ft_isdigit(int machin);
int ft_isascii(int machin);
int ft_isprint(int machin);
int ft_isalpha(int machin);
int ft_puts(const char *s);
void ft_bzero(void *s, size_t n);

int main() {

	/** STRLEN **/

	/* printf("strlen : %d\n", (int)strlen("POPOPOOOO")); */
	/* printf("asm strlen : %d\n", _ft_strlen("POPOPOOOO")); */

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

	int ret;
	char test[5] = "test";
	char *s = (char *)malloc(5);
	int i;
	for (i = 0; i < 5; ++i)
		s[i] = 'a';

	ret = ft_puts(s);
	printf("ret = %d\n", ret);
	ret = ft_puts(test);
	printf("ret = %d\n", ret);
	ret = ft_puts("test");
	printf("ret = %d\n", ret);
	ret = ft_puts("yolo");
	printf("ret = %d\n", ret);
	ret = ft_puts("what???");
	printf("ret = %d\n", ret);

	/** FT_BZERO **/

	/* char	s[5] = "yolo\n"; */

	/* printf("%s", s); */
	/* ft_bzero(s, 5); */
	/* printf("%s", s); */

	return 0;
}



