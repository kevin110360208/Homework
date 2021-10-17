#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,a;
	printf("Please enter an integer: ");
	scanf_s("%d", &num);
	a = num % 2;
	if (a == 1)
	{
		printf("The integer is odd\n");
	}
	else
	{
		printf("The integer is even\n");
	}
	system("pause");
	return 0;
}