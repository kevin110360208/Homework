#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float principal = 5000.0;
	float rate = 0.1;
	float deposit;
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		printf("%s\t%s\n", "Year", "Amount on deposit");
		for (j = 1; j <= 15; j++)
		{
			printf("%d\t", j);
			deposit = principal * pow(1.0 + rate, j);
			printf("%.2f\n", deposit);
		}
		rate = rate + 0.005;
	}
	system("pause");
	return 0;
}