#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *a = malloc(sizeof *a);
	if (a)
	{
		*a = 1;
		printf("a is: %d\n", *a);
	}
	free(a);
}
