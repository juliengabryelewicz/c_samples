#include <stdio.h>

int main(void)
{
	char a = 'a';
	switch (a)
	{
	case 'a':
		printf("The value is 'a'.\n");
		break;
	case 'b':
		printf("The value is 'b'.\n");
		break;
	case 'c':
		printf("The value is 'c'.\n");
		break;

	default:
		printf("None.\n");
		break;
	}
}
