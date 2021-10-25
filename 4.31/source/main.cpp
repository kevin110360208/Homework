#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	for (i = 0; i <= 4; i++)
	{
		for (j = 3; j >= i ; j--)
		{
			printf(" ");
		}
		for (j = 0; j <= i + i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 6; j >= i + i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}