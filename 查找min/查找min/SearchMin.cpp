//可从前往后 ，也可以从后往前，主要看旋转的个数多少来确定查找顺序，这样可提高效率
#include<iostream>
using namespace std;
int SearchMin(const int*arr, const size_t size)
{
	size_t i = 0;
	for (i = 0; i < size; i++)
	{
		if (arr[i]>arr[i + 1])
		{
			return i + 1;
		}
	}
	return -1;
}
int main()
{
	int arr[5] = { 4, 5,1,2,3 };
	int ret = SearchMin(arr, 5);
	cout << arr[ret] << endl;
	system("pause");
	return 0;
}
