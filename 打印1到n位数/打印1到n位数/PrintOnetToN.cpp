#include<iostream>
using namespace std;
void _PrintOneToN(char* number, size_t lenth, size_t index);
void PrintDisgtn(char* number);
void PrintOneToN(size_t n)
{
	char *number = new char[n + 1];
	memset(number, '0', n);
	number[n] = '\0';
	_PrintOneToN(number, n, 0);
	delete[] number;
}
//�ݹ����ȫ����
void _PrintOneToN(char* number, size_t lenth, size_t index)
{
	if (index == lenth)
	{
		PrintDisgtn(number);
		return;
	}
	//�±��ɴ�С���ν���ȫ����
	for (size_t i = 0; i < 10; ++i)
	{
		number[index] = i + '0';
		_PrintOneToN(number, lenth, index + 1);
	}
}
void PrintDisgtn(char* number)
{
    int	flag = 1;
	size_t lenth = strlen(number);
	for (size_t i = 0; i < lenth; i++)
	{
		if (number[i] != '0')
			flag = -1;
		//�ӷ��㴦��ӡ
		if (flag == -1)
		{
			printf("%c", number[i]);
		}
	}
	cout << ' ';
}
int main()
{
	PrintOneToN(2);
	system("pause");
	return 0;
}