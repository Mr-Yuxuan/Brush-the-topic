#include<iostream>
using namespace std;
#define UP 0.00000001
#define DONE -0.00000001
double _power(double base, size_t expont)
{
	if (expont == 0)
		return 1;
	else
		return base*_power(base, expont - 1);
}
double Power(double base, int expont)
{
	
	if ((base<UP&&base>DONE)&&(expont<0))     //���жϻ����Ƿ�Ϊ��
	{
		return 0;
	}
	if (base < DONE)            //����С��������
	{
		
		if (expont >= 0)
		{
			return _power(base, expont);
		}
		else
		{
			int _expont = -expont;
			return 1 / _power(base, _expont);
		}
	}
	if (base>UP)            //�������������
	{
		if (expont >= 0)
		{
			return _power(base, expont);
		}
		else
		{
			int _expont = -expont;
			return 1 / _power(base, _expont);
		}

	}
}

int main()
{
	cout << Power(3, -3) << endl;
	system("pause");
	return 0;
}