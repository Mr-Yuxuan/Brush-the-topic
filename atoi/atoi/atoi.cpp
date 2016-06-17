#include<stdio.h>
#include<stdlib.h>
int my_atio(char *p)
{
	int flag = 1;
	int ret = 0;
	if ( *p== '-')
		flag = -1;
	if (*p == '+' || *p== '-')
		p++;
	while (*p != '\0')
	{
		if ((*p >= '0') && (*p <= '9'))
		{
			ret = ret * 10 + *p - '0';
			p++;
		}
		else
			p++;
	}
	return ret*flag;
}
int main()
{
	char arr[100];
	int k = 0;
	gets_s(arr,100);
	k=my_atio(arr);
	printf("%d\n", k);
	system("pause");
	return 0;
}