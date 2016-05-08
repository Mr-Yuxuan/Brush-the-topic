#include<iostream>
#include<assert.h>
using namespace std;
void MeaningOder(int a[],size_t size)
{
	assert(a);
	size_t left = 0;
	size_t right = size - 1;
	while (left < right)
	{
		if (a[left] % 2 == 0)
		{
			if (a[right] % 2 == 0)
			{
				right--;
				continue;
			}
			else
			{
				int tmp = a[left];
				a[left] = a[right];
				a[right] = tmp;
				left++;
				right--;
			}
		}
		else
		{
			left++;
		}
	}
	return;
}
int main()
{
	int a[] = { 0, 2, 2, 3, 4, 5, 6, 7, 8, 9, };
	MeaningOder(a, sizeof(a) / sizeof(a[0]));
	for (size_t i = 0; i < 10; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}