#include<iostream>
using namespace std;
//1，统计二进制1的个数
int OneOfNum(int num)
{
	int count = 0;
	while (num)
	{
		count++;
		num &= (num - 1);
	}
	return count;
}
void test1()
{
	int num = 10;
	cout << OneOfNum(num) << endl;
	return;
}
//2，两个整数不同的位数
int bit_two_diff(int m, int n)
{
	int num = m^n;
	int count = 0;
	while (num)
	{
		count++;
		num &= (num - 1);
	}
	return count;
}
void test2()
{
	int n = 3;
	int m = 8;
	cout << bit_two_diff(n,m) << endl;
	return;
}
//3,判断一个数是否为2的N次方
bool Is_two_power_N(int num)
{
	return !(num&(num >> 1));
}
void test3()
{
	int m = 7;
	cout << Is_two_power_N(m) << endl;
	return;
}
//4,宏定义一个数的奇偶位交换
#define Chang(N)  (((N&0x55555555)<<1)|((N&0xaaaaaaaa)>>1))
void test4()
{
	cout << Chang(10) << endl;
	return;
}
//5,一个数二进制序列的逆序
int reverse_bit_num(int num)
{
	int ret = 0;
	
	for (int i = 0; i < 32; ++i)
	{
		ret <<= 1;
		ret |= 1 & (num >> i);
	}
	return ret;
}
void test5()
{
	int m = 10;
	cout << reverse_bit_num(m) << endl;
	return;
}
//6,将一个数指定位置1或0
int Set_bit(int num, int pos, int flag)
{
	if (flag == 1)
	{
		num |= 1 << (pos - 1);
	}
	if (flag == 0)
	{
		num &= ~(1 << (pos - 1));
	}
	return num;
}
void test6()
{
	int num = 10;
	cout << Set_bit(num,2,0) << endl;
	return;
}
//7,找出一组数中只出现一次的数（只有一个数）
int FindOne(int *a, int size)
{
	int xor = 0;
	for (int i = 0; i < size; ++i)
	{
		xor ^= a[i];
	}
	return xor;
}
void test7()
{
	int a[] = { 1, 2, 4, 1, 2, 4, 6 };
	cout << FindOne(a, sizeof(a)/sizeof(a[0])) << endl;
	return;
}
//8,找出数组中两个数只出现一次的数（只有两个数）
void FindTwo(int *a, int size, int *p1, int *p2)
{
	int xor = 0;
	for (int i = 0; i < size; ++i)
	{
		xor ^= a[i];
	}
	int ret = xor;
	int pos = 0;
	while (xor)
	{
		if (xor & 1 == 1)
			break;
		pos++;
		xor >> 1;
	}
	for (int i = 0; i < size; ++i)
	{
		if (a[i] & (1 << pos) == 1)
		{
			(*p1) ^= a[i];
		}
	}
	*p2 = xor ^ (*p1);
	return;
}
void test8()
{
	int p1 = 0;
	int p2 = 0;
	int a[] = { 1, 2, 4, 1, 2, 4, 6,5 };
	FindTwo(a, sizeof(a) / sizeof(a[0]), &p1, &p2);
	cout << p1 << " " << p2 << endl;
	return;
}
int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	system("pause");
	return 0;
}