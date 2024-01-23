#include <stdio.h>

union MyUnion
{
	char a;
	int b;
	double c;
};

int main(void)
{
	union MyUnion u;
	u.a = 'A';
	printf("value is : %c\n", u.a);
	u.b = 1;
	printf("value is : %d\n", u.b);
	u.c = 2.3;
	printf("value is : %f\n", u.c);
}
