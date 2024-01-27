#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[30];
	char b[30] = "Hello World!";
	strcpy(a, b);
	printf("The copied string is: %s\n", a);
}
