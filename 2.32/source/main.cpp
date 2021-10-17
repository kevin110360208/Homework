#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w, h, BMI;
	printf("Please enter your hight(m): ");
	scanf_s("%f", &h);
	printf("\nPlease enter your weight(kg): ");
	scanf_s("%f", &w);
	BMI = w / (h * h);
	printf("BMI = %.2f\n", BMI);
	printf("BMI VALUES\n");
	printf("Uderweight: less than 18.5\n");
	printf("Normal:     beween 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese:      30 or greater\n");
	system("pause");
	return 0;
}