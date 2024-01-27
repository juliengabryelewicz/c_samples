#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "Hello World!";
	char b[] = "World";
	char *posFound = strstr(a, b);
	if (posFound)
	{
		printf("Substring found at position: %ld.\n", posFound - a);
	}
	else
	{
		printf("Substring not found.\n");
	}
}
