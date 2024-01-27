#include <stdio.h>

int main(void)
{
	char str[100];
	FILE *fp = fopen("file.txt", "r");
	if (!fp)
	{
		printf("Error opening the file. Exiting...\n");
		return 1;
	}
	while (fgets(str, 100, fp) != NULL)
	{
		printf("%s", str);
	}
	fclose(fp);
}
