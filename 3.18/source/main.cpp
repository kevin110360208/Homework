#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float money, salary;
	printf("Enter sales in dollars(-1 to end): ");
	scanf_s("%f", &money);
	while (money != -1)
	{
		salary = 200 + (money*0.09);
		printf("Salary is $%.2f\n", salary);
		printf("\n");
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &money);
	}
	system("pause");
	return 0;
}