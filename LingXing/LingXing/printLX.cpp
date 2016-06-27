#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7 - i; j++)
		{
			printf(" ");
		}
	    for (k = 2; k < 2 * i + 1;k++)
		printf("*");
		printf("\n");
     }
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= i; j++)
			printf(" ");
		for (k = 11; k>2 * i - 2;k--)
			printf("*");
		   printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}