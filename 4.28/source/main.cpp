#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float hours, salary, wage, d,e;
	printf("Employees as manager is 1\n");
	printf("Hourly worker is 2\n");
	printf("Commission worker is 3\n");
	printf("pieceworker is 4\n");
	printf("Please enter your pay code(-1 to end): ");
	scanf_s("%d", &a);
	while (a!=-1)
	{
		switch (a)
		{
		case 1:
			printf("Weekly salary is $8000.00\n\n");
			break;
		case 2:
			printf("Please enter hourly wage: ");
			scanf_s("%f", &wage);
			printf("Please enter hours: ");
			scanf_s("%f", &hours);
			if (hours > 40)
			{
				salary = wage * 40 + (hours - 40)*1.5*wage;
				printf("Weekly salary is $%.2f\n\n", salary);
			}
			else
			{
				salary = wage * hours;
				printf("Weekly salary is $%.2f\n\n", salary);
			}
			break;
		case 3:
			printf("Please enter gross weekly sales: ");
			scanf_s("%f", &d);
			salary = 250 + (d*0.057);
			printf("Weekly salary is $%.2f\n\n", salary);
			break;
		case 4:
			printf("Please enter number of pieces produced per week: ");
			scanf_s("%f", &e);
			salary = e * 0.2;
			printf("Weekly salary is $%.2f\n\n", salary);
		}
		printf("Please enter your pay code(-1 to end): ");
		scanf_s("%d", &a);
	}
	system("pause");
	return 0;
}