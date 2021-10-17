#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, a;
	printf("Please enter two integers: ");
	scanf_s("%d%d", &num1, &num2);
	a = num1 % num2;
	if (a == 0)
	{
		printf("%d is a multiple of %d\n", num1, num2);
	}
	else
	{
		printf("%d is not a multiple of %d\n", num1, num2);
	}
	system("pause");
	return 0;
}