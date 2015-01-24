
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int _ft_strlen(char *truc);
int ft_isdigit(int machin);
int ft_isascii(int machin);
int ft_isprint(int machin);
int ft_isalpha(int machin);
int ft_puts(const char *s);

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

	ret = ft_puts("test");
	printf("ret = %d\n", ret);
	ret = ft_puts("yolo");
	printf("ret = %d\n", ret);
	ret = ft_puts("what???");
	printf("ret = %d\n", ret);

	return 0;
}



