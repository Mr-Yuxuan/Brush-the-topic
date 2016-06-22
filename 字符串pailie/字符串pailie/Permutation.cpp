#include<iostream>
using namespace std;
void pPermutation(char *str,char *pstr)
{
	
	char *beginning = pstr + 1;
	char *pch = beginning;
	while (*pch != '\0')
	{
		while (*beginning != '\0')
		{

			char tmp = *pstr;
			*pstr = *beginning;
			*beginning = tmp;
			beginning++;
		}
		cout << str << endl;
		char tmp = *pstr;
		*pstr = *beginning;
		*beginning = tmp;
		pch++;
	}
	
	return;
}
void Permutation(char *str)
{
	if (str == NULL)
		return;
	char* pstr = str;
	while (*pstr != '\0')
	{
		pPermutation(str, pstr);
		pstr++;
	}
}
int main()
{
	char s[] = "abc";
	Permutation(s);
	system("pause");
	return 0;
}