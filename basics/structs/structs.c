#include <stdio.h>

typedef struct
{
	char a;
	int b;
	double c;
} MyStruct;

int main(void)
{
	MyStruct s = {'a', 1, 2.3};
	printf("a : %c\n", s.a);
	printf("b : %d\n", s.b);
	printf("c : %f\n", s.c);
}
