#include <stdio.h>

void set(int *a)
{
	*a = 2;
}

int main(void)
{
	int a = 1;
	printf("Value before: %d\n", a);
	set(&a);
	printf("Value after: %d\n", a);
}
