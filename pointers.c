/*
gcc -Wall -Wextra pointers.c && ./a.out
*/


#include <stdio.h>


int	main(void)
{
	int	i = 42;
	int	*p = &i;
	int	**pp = &p;


	printf("\n\n");


	printf("int	i = 42;\n");
	printf("int	*p = &i;\n");
	printf("int	**pp = &p;\n\n\n");


	printf(
		"+------+----------------+----------------+\n"
		"| NAME |      VALUE     |     ADDRESS    |\n"
		"+------+----------------+----------------+\n"
		"|  i   |       %i       | %p |\n"
		"|  *p  | %14p | %p |\n"
		"|  **p | %14p | %p |\n"
		"+------+----------------+----------------+\n\n\n"
	, i, &i, p, &p, pp, &pp);


	printf("i: %d\n", i);
	printf("&i: %p\n\n", &i);

	printf("*i: ERROR // you can only dereference pointers\n\n\n");


	printf("p: %p\n", p);
	printf("&p: %p\n\n", &p);

	printf("*p: %d\n\n\n", *p);

	printf("pp: %p\n", pp);
	printf("&pp: %p\n\n", &pp);

	printf("*pp: %p\n", *pp);
	printf("**pp: %d\n\n", **pp);


	printf("\n");
	return (0);
}
