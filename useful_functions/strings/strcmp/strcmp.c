#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *a = "Hello World!";
	const char *b = "Hello World!";
	if (strcmp(a, b) == 0)
	{
		printf("Strings equal.\n");
	}
	else
	{
		printf("Strings not equal.\n");
	}
}
