#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int squ = 0,cube = 0,i;
	printf("number\tsquare\tcube\n");
		for (i = 0; i <= 10; i++)
		{
			squ = i * i;
			cube = i * i * i;
			printf("%d\t%d\t%d\t\n", i, squ, cube);
	    }
		system("pause");
		return 0;
}