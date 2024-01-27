#include <stdio.h>

int main(void)
{
	FILE *fp = fopen("file.txt", "w");
	fprintf(fp, "%s\n%s", "Line 1", "Line 2");
	fclose(fp);
}
