#include <stdio.h>

//function declaration
int add(int b, int c);

int main(void)
{
	int a = add(10, 20);
	printf("%d\n", a);
}

// function definition
int add(int b, int c)
{
	return b + c;
}
