#include <stdio.h>

int main(void)
{
	int myarr[5] = {10, 20, 30, 40, 50};
	int* p = myarr;
	printf("a is: %d\n", *p);
	p++;
	printf("a is: %d\n", *p);
}
