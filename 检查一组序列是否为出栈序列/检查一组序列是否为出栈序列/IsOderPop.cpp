#include<iostream>
#include<assert.h>
#include<stack>
using namespace std;
bool IsOderPop(const int *a,const int *b,size_t sz)
{
	assert(a);
	assert(b);
	stack<int> s;
	size_t index1 = 0;
	size_t index2 = 0;
	while (index2 < sz&&index1<=sz)
	{
		while (index1 < sz)
		{
			if (a[index1] != b[index2])
			{
				s.push(a[index1]);
				index1++;
			}
			else
			{
				s.push(a[index1]);
				index1++;
				break;
			}
		}
		if (s.top() == b[index2])
		{
			s.pop();
			index2++;

		}
		else
			return false;
	}
	if (s.empty())
	{
		return true;
	}
	else
		return false;
}
int main()
{
	int a1[5] = { 1, 2, 3, 4, 5 };
	int a2[5] = { 5, 4, 3, 2, 1 };
	int a3[5] = { 4, 5, 2, 1, 3 };
	cout << IsOderPop(a1, a2, 5) << endl;
	system("pause");
	return 0;
}