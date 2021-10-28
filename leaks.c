/*
gcc -Wall -Wextra leaks.c && ./a.out
*/


#include <stdio.h>
#include <stdlib.h>


void test(void)
{
	char	*str;


	str = malloc(4);

	str[0] = 'b';
	str[1] = 'a';
	str[2] = 'r';
	str[3] = '\0';


	printf("str = malloc(4); // malloc returns the address of the first malloced byte\n\n");

	printf("str[0] = b; // same as *str = 'b';\n");
	printf("str[1] = a; // same as *(str + 1) = 'a';\n");
	printf("str[2] = r;\n");
	printf("str[3] = \\0;\n\n");

	printf("str      : %p\n", str);
	printf("&(str[0]): %p\n", &(str[0]));
	printf("&str     : %p\n\n", &str);


	free(str);
	// free(&(*str));
	// free(&(str[0]));


	printf("free(str); // free(&(*str)) or free(&(str[0])) also works\n\n");


	printf("str      : %p\n", str);
	printf("&(str[0]): %p\n", &(str[0]));
	printf("&str     : %p\n\n", &str);


	str = NULL;


	printf("str = NULL;\n\n");


	printf("str      : %p\n", str);
	printf("&(str[0]): %p\n", &(str[0]));
	printf("&str     : %p\n\n", &str);
}


int	main(void)
{
	printf("\n\n");


	test();


	system("leaks --quiet a.out");


	printf("\n");
	return (0);
}
