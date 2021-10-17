#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2,num3;
	printf("Please enter first integer: ");
	scanf_s("%d", &num1);
	printf("Please enter second integer: ");
	scanf_s("%d", &num2);
	printf("Please enter third integer: ");
	scanf_s("%d", &num3);
	if (num1 > num2 && num2 > num3)
	{
		printf("%d is largest integer\n", num1);
		printf("%d is smallest integer\n", num3);
	}
	if (num3 > num2 && num2 > num1)
	{
		printf("%d is largest integer\n", num3);
		printf("%d is smallest integer\n", num1);
	}
	if (num2 > num3  && num3 > num1)
	{
		printf("%d is largest integer\n", num2);
		printf("%d is smallest integer\n", num1);
	}
	if (num1 > num3 && num3 > num2)
	{
		printf("%d is largest integer\n", num1);
		printf("%d is smallest integer\n", num2);
	}
	if (num3 > num1 && num1 > num2)
	{
		printf("%d is largest integer\n", num3);
		printf("%d is smallest integer\n", num2);
	}
	if (num2 > num1 && num1 > num3)
	{
		printf("%d is largest integer\n", num2);
		printf("%d is smallest integer\n", num3);
	}
	system("pause");
	return 0;
}