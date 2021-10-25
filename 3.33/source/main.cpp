#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a = '+';
	char b = ' ';
	int i, j,c,d;
	printf("Please enter length: ");
	scanf_s("%d", &c);
	printf("Please enter breadth: ");
	scanf_s("%d", &d);
	for (i = 1; i <= c; i++)
	{
		for (j = 1; j <= d; j++)
		{
			if (i == 1 || i == c || j == 1 || j == d)
			{
				printf("%c", a);
			}
			else
			{
				printf("%c", b);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}