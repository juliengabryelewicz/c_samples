#include <stdio.h>

int main(void)
{
	int myarr[2][3] = {{1, 2, 3},
					{4, 5, 6}};

	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			printf("%d ", myarr[a][b]);
		}
		printf("\n");
	}
}
