#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("a before the change: %d\n", a);
	int* b = &a;
	*b = 15;
	printf("The value after the change: %d\n", a);
}
