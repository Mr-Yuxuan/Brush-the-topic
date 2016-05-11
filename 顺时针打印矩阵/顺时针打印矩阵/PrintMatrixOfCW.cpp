#include<iostream>
#include<assert.h>
using namespace std;
void PrintMatrix(int **a, int start,int cols,int rows)
{
	//从左到右打印
		for (int i = start; i <=rows; ++i)
		{
			cout << a[start][i] << ' ';
		}
	//从上到下打印
	if (start < cols)
	{
		for (int i = start+1; i <=cols; i++)
		{
			cout << a[i][rows] << ' ';
		}
	}
	//从右到左打印
	if (start < rows&&start<cols)
	{
		for (int i = rows-1; i >= start; --i)
		{
			cout << a[cols][i] << ' ';
		}
	}
	//从下到上打印
	if (start < cols - 1 && start < rows)

	{
		for (int i = cols-1; i > start; i--)
		{
			cout << a[i][start] << ' ';
		}
	}
	return;
}
void PrintMatrixOfCW(int **a, size_t cols, size_t rows)
{
	assert(a);
	int start = 0;
	size_t col = cols-1;
	size_t row = rows-1;
	while ((start * 2 < cols)&&(start * 2 < rows))
	{
		PrintMatrix(a, start, col, row);
		start++;
		col = col - start;
		row = row - start;
	}
	return;
}
int main()
{
	int arr[4][4] = { { 1, 2, 3, 4 },
	                  { 5, 6, 7, 8 },
	                  { 9, 10, 11, 12 },
	                  { 13, 14, 15, 16 } };
	int**a = new int*[4];
	for (size_t i = 0; i < 4; ++i)
	{
		a[i] = arr[i];
	}
	PrintMatrixOfCW(a, 4, 4);
	system("pause");
	return 0;
}