#include<iostream>
using namespace std;
size_t OneOfBinary(const int i)  //��������ѭ��
{
	int k = i;
	size_t count = 0;
	while (k)
	{
		count += k & 1;
		k = k >> 1;
	}
	return count;
}
size_t OneofBinary1(int n) //�м���һ��ѭ������
{
	size_t count = 0;
	while (n)
	{
		++count;
		n &= n - 1;
	}
	return count;
}
int main()
{
	cout << OneofBinary1(6) << endl;
	system("pause");
	return 0;
}