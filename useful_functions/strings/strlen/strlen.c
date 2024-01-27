#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str[] = "How many characters?";
	size_t myStrLength = strlen(str);
	printf("%zu characters.\n", myStrLength);
}
