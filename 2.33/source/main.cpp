#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int   b,  d, e;
	float a,c,t;
	printf("total miles driven per day(km): ");
	scanf_s("%f", &a);
	printf("Cost per liter of gasoline: ");
	scanf_s("%d", &b);
	printf("Average miles per liter: ");
	scanf_s("%f", &c);
	printf("parking fees per day: ");
	scanf_s("%d", &d);
	printf("Tolls per day: ");
	scanf_s("%d", &e);
	t = (a * b) + d + e;
	printf("The cost of driving to work in a day is %f\n", t);
	system("pause");
	return 0;
}