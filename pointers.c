/*
gcc pointers.c && ./a.out
*/


#include <stdio.h>


int	main(void)
{
	int	i = 42;
	int	*p = &i;
	int	**pp = &p;


	printf("\n");


	printf("int	i = 42;\n");
	printf("int	*p = &i;\n");
	printf("int	**pp = &p;\n");


	printf("\n\n");


	printf("i: %d\n", i);
	printf("&i: %p\n\n", &i);

	printf("*i: error, because you can only dereference pointers\n\n\n");


	printf("p: %p\n", p);
	printf("&p: %p\n\n", &p);

	printf("*p: %d\n\n\n", *p);

	printf("pp: %p\n", pp);
	printf("&pp: %p\n\n", &pp);

	printf("*pp: %p\n", *pp);
	printf("**pp: %d\n\n", **pp);

	return (0);
}
