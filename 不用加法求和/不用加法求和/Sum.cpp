  //先通过异或将无进位的数加起来，再通过与和左移算出进位，直到没有进位时停止
#include<stdio.h>
#include<stdlib.h>
int Sum(int num1, int num2)
{
	int sum;
	int carry;
	do{
		sum = num1^num2;
		carry = (num1&num2) << 1;
		num1 = sum;
		num2 = carry;
	} while (carry != 0);
	return sum;
}
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf_s("%d""%d", &a, &b);
	sum = Sum(a, b);
	printf("%d\n", sum);
	system("pause");
	return 0;
}