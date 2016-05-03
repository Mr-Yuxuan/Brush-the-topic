#include<iostream>
using namespace std;
bool Serach(int *a, size_t row, size_t col, const int& x)
{
	size_t rows = 0;
	size_t cols = col - 1;
	while ((rows <=row) && (col >= 0))  
	{
		if (a[rows*col + cols] < x)    //从右上角开始
		{
			rows++;                   //比它大的加一行
			continue;
		}
		if (a[rows*col + cols]>x)
		{
			cols--;                  //比它小的减一列
			continue;
		}
		if (a[rows*col + cols] == x)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int arr[4][4] = { { 1, 2, 8, 9 },
	                  { 2, 4, 9, 12 },
	                  { 4, 7, 10, 13 },
	                  { 6, 8, 11, 15 } };
	bool ret = Serach((int*)arr, 4, 4, 5);
	bool aret = Serach((int*)arr, 4, 4, 7);
	cout << "5: "<<ret << endl;
	cout << "7: " << aret << endl;
	system("pause");
	return 0;
}