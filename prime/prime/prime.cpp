#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int *p)
{
	int i, flage;

	for (i = 2; i <= sqrt((double)*p); i++)
	{

		if ((*p) % i == 0)
		{
			flage = 1;
			break;
		}
		else flage = 0;

	}
	return flage;
}
int main()
{
	int a, b;
	scanf_s("%d", &a);
	b = prime(&a);
	if (b == 1)
		printf("%d is not a prime number", a);
	else
		printf("%d is a prime number", a);
	system("pause");
	return 0;
}