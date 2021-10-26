/*
gcc -Wall -Wextra addressing_and_dereferencing.c && ./a.out
*/


#include <stdio.h>
#include <stdlib.h>


int	main(void)
{
	char	*str;


	printf("\n\n");


	printf("char	*str;\n\n\n");


	str = malloc(4);

	str[0] = 'b';
	str[1] = 'a';
	str[2] = 'r';
	str[3] = '\0';


	printf("str = malloc(4); // malloc returns the address of the first malloced byte\n\n");

	printf("str[0] = b; // same as *str = 'b';\n");
	printf("str[1] = a; // same as *(str + 1) = 'a';\n");
	printf("str[2] = r;\n");
	printf("str[3] = \\0;\n\n\n");


	printf("&str: %p // address of the pointer str, which is NOT the address of the first malloced byte\n", &str);
	printf("str : %p // value of the pointer str, which is the address of the first malloced byte\n", str);
	printf("*str: %c // dereferenced value of the pointer str, which is the value of the first malloced byte\n\n\n", *str);


	printf("str[0]                   : %c\n", str[0]);
	printf("str[1]                   : %c\n", str[1]);
	printf("str[2]                   : %c\n", str[2]);
	printf("str[3]                   : \\0\n\n");

	printf("*(str + 0 * sizeof(char)): %c\n", *(str + 0 * sizeof(char)));
	printf("*(str + 1 * sizeof(char)): %c\n", *(str + 1 * sizeof(char)));
	printf("*(str + 2 * sizeof(char)): %c\n", *(str + 2 * sizeof(char)));
	printf("*(str + 3 * sizeof(char)): \\0\n\n\n");


	printf("&(str[0])             : %p\n", &(str[0]));
	printf("&(str[1])             : %p\n", &(str[1]));
	printf("&(str[2])             : %p\n", &(str[2]));
	printf("&(str[3])             : %p\n\n", &(str[3]));

	printf("str + 0 * sizeof(char): %p\n", str + 0 * sizeof(char));
	printf("str + 1 * sizeof(char): %p\n", str + 1 * sizeof(char));
	printf("str + 2 * sizeof(char): %p\n", str + 2 * sizeof(char));
	printf("str + 3 * sizeof(char): %p\n\n\n", str + 3 * sizeof(char));


	printf("*(&str)   : %p // = str; the * cancels out the &\n", *(&str));
	printf("&(*str)   : %p // = str; normally you can't get the address of the char 'b', but because 'b' was obtained with a dereference you can get its address\n\n", &(*str));

	printf("&(&str)   : ERROR // this is trying to get the address of an address\n");
	printf("*(*str)   : ERROR // this is trying to dereference the char 'b'\n\n");

	printf("&(*(*str)): ERROR // see *(*str)\n");
	printf("*(&(*str)): %c // see &(*str)\n", *(&(*str)));
	printf("*(*(&str)): %c // = *str\n\n", *(*(&str)));


	printf("\n");
	return (0);
}
