#include <stdio.h>

struct MyStruct
{
	char a;
	int b;
	double c;
};

void read_struct(struct MyStruct myparam)
{
	printf("a : %c\n", myparam.a);
	printf("b : %d\n", myparam.b);
	printf("c : %f\n", myparam.c);
}

int main(void)
{
	struct MyStruct s = {'a', 1, 2.3};
	read_struct(s);
}
