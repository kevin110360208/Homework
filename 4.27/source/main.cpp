#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int side3;
	int i, j, k;
	printf("%s\t%s\t%s\n", "side1", "side2", "side3");
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				side3 = pow(k, 2);
				if (side3==pow(i,2)+pow(j,2))
				{
					printf("%d\t%d\t%d\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}