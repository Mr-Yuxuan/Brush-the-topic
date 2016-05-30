#include<iostream>
#include<assert.h>
using namespace std;
void InsertSort(int *a, size_t n)
{
	assert(a);
	for (size_t i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				a[end] = tmp;
			}
			end--;
		}
	}
	
}
int main()
{
	int a[] = { 7,1, 3, 6, 2, 4, 5, 8, 9, 0 };
	InsertSort(a, (sizeof(a) / sizeof(a[0])));
	for (size_t i = 0; i < (sizeof(a) / sizeof(a[0])); ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}