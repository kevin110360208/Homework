#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int an;
	float bb, tch, tcr, cl, b;
	printf("Enter account number(-1 to end): ");
	scanf_s("%d", &an);
	while(an != -1)
	{
		printf("Enter beginning balance: ");
		scanf_s("%f", &bb);
		printf("Enter total chrage: ");
		scanf_s("%f", &tch);
		printf("Enter total credit: ");
		scanf_s("%f", &tcr);
		printf("Enter credit limit: ");
		scanf_s("%f", &cl);
		b = bb + tch - tcr;
		if (b > cl)
		{
			printf("Account:\t%d\n", an);
			printf("Credit limit:\t%.2f\n", cl);
			printf("Balance:\t%.2f\n", b);
			printf("Credit Limmit Exceeded.\n");
			printf("\n");
		}
		else
		{
			printf("\n");
		}
		printf("Enter account number(-1 to end): ");
		scanf_s("%d", &an);
	}
	system("pause");
	return 0;
}