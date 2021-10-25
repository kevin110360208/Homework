#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("(A)\n");
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//=====================================================================
	printf("(B)\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 9; j >= i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	//=====================================================================
	printf("(C)\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 9; j >= i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	//=====================================================================
	printf("(D)\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 8; j >= i; j--)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}