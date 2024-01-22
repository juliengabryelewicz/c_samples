#include <stdio.h>

int add(int b, int c)
{
	return b + c;
}

int main(void)
{
	int a = add(10, 20);
	printf("%d\n", a);
}
