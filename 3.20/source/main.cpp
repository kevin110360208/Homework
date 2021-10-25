#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hour, rate,salary;
	printf("Enter # of hours worked(-1 to end): ");
	scanf_s("%f", &hour);
	while (hour != -1)
	{
		printf("Enter hourly rate of the worker(00.00): ");
		scanf_s("%f", &rate);
		if (hour > 40)
		{
			salary = (hour * rate) + (rate / 2);
			printf("Salary is $%.2f\n", salary);
			printf("\n");
		}
		else
		{
			salary = hour * rate;
			printf("Salary is $%.2f\n", salary);
			printf("\n");
		}
		printf("Enter # of hours worked(-1 to end): ");
		scanf_s("%f", &hour);
	}
	system("pause");
	return 0;
}