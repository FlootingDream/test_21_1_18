#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) 
{
	int i, j, leap = 1, count = 0,a,b;
	scanf("%d%d", &a, &b);

	for (i = a; i <= b; i++)
	{
		for (j = 2,leap=1; j < sqrt(i); j ++)
		{
			if (i % j == 0)
			{
				leap = 0;
				break;
			}
		}
		if (leap == 1)
		{
			printf("%d ", i);
			count++;
			if (count % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n¹²%d¸ö",count);
	return 0;
}
