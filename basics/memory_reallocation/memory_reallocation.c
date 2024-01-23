#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *a = malloc(sizeof(int));
	printf("Allocated %zu bytes.\n", sizeof *a);
	printf("Change memory allocation with realloc\n");
	a = realloc(a, 2 * sizeof(int));
	printf("Memory is now %zu bytes long.\n", 2 * sizeof *a);
	free(a);
}
