#include<iostream>
using namespace std;
size_t OneOfBinary(const int i)
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
int main()
{
	cout << OneOfBinary(8) << endl;
	system("pause");
	return 0;
}