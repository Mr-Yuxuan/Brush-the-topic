  //��ͨ������޽�λ��������������ͨ��������������λ��ֱ��û�н�λʱֹͣ
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