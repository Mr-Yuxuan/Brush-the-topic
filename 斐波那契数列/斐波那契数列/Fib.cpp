#include<iostream>
using namespace std;
//µÝ¹é
long long Fib(size_t n)
{
	if (n < 2)
		return n;
	else
		return Fib(n - 1) + Fib(n - 2);
}
//·ÇµÝ¹é
long long Fibo(size_t n)
{
	if (n < 2)
		return n;
	else
	{
		long long first = 0;
		long long second = 1;
		long long sum = 0;
		for (size_t i = 2; i <= n; i++)
		{
			sum = first + second;
			first = second;
			second = sum;
			
		}
		return sum;
	}
}
int main()
{
	cout << Fib(5) << endl;
	cout << Fibo(5) << endl;
	system("pause");
	return 0;
}