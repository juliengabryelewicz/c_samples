#include <stdio.h>

int main(void)
{
	int myarr[5] = {10, 20, 30, 40, 50};
	int *a = myarr;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}
