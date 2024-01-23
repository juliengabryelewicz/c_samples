#include <stdio.h>

void add(void)
{
	static int a = 10;
	a++;
	printf("a : %d\n", a);
}

int main(void)
{
	add();
	add();
	add();
}
