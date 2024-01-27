#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30] = "Hello, ";
	char b[30] = "World!";
	strcat(a, b);
	printf("The concatenated string is: %s\n", a);
}
