#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;
class String
{
public:
	String(char *str="")
	:_str(new char[strlen(str)+5])
	{
		*((int *)_str) = 1;
		_str += 4;
		strcpy(_str, str);
	}
	String(String &str)
	{
		_str = str._str;
		GetFanCount(_str);
	}
	String& operator=(String &str)
	{
		if (this != &str)
		{
			if (GetCount(_str))
			{
				delete[](_str - 4);
			}
			_str = str._str;
			GetFanCount(_str);
		}
		return *this;
	}
	~String()
	{
		if (_str != NULL)
		{
			if (GetCount(_str))
			{
				delete[](_str - 4);
			}

		}
	}
	char& operator[](int index)
	{
		if (!GetCount(_str))
		{
			String tmp(_str);
			_str = new char[strlen(_str) + 5];
			*(int *)_str = 1;
			--*(int*)(tmp._str - 4);
			_str += 4;
			strcpy(_str, tmp._str);
		}
		GetFanCount(_str);
		return _str[index];
	}
public:
	void GetFanCount(char *str)
	{
		++*((int *)(_str - 4));
	}
	bool GetCount(char *str)
	{
		return (--(*((int*)(_str - 4))) == 0);
	}
private:
	char *_str;
};
int main()
{
	String str1("aaaaaaaaaaaaa");
	String str2("bbbbbbbbbbbbb");
	String str3(str1);
	str1 = str2;
	str3[1] = 'b';
	return 0;
}