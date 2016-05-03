#include<iostream>
#include<assert.h>
#include<string.h>
using namespace std;

char* replace_space(char *str,size_t size)
{
	assert(str);
	char* s1 = str;
	size_t space = 0;
	size_t new_size = 0;
	//计算空格数
	while (*s1)
	{
		if (*s1 == ' ')
			space++;
		s1++;
	}
	new_size = strlen(str) + space * 2 + 1;      //计算新的大小
	//保证原数组能放下新的大小
	if (new_size > size)                        
		return str;
	char* newtail = str + new_size-1;
	//进行替换
	while (newtail != s1)
	{
		if (*s1 == ' ')
		{
			*newtail = '0';
			newtail--;
			*newtail = '2';
			newtail--;
			*newtail = '%';
			
		}
		else
		{
			*newtail = *s1;
		}
		s1--;
		newtail--;
	}
	return str;
}
int main()
{
	char str[20] = { "We are happy" };
	
	
	cout << replace_space(str, 20) << endl;
	system("pause");
	return 0;
}