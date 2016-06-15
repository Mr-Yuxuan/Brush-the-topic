#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define MAX 1000
int getline(char arr[], int m)
{
	int ch = 0;
	int i = 0;
	while ((m - 1) && (((ch = getchar()) != EOF) && (ch != '\n')))
	{
		arr[i] = ch;
		i++;
		m--;
	}
	if (ch == '\n')
	{
		arr[i] = ch;
		arr[++i] = '\0';
	}
	return i;
}
char *mystrstr(char  *p, char const *q)
{
	assert(p);
	assert(q);
	char *tmp = NULL;
	while (*p)
	{
		while (*q)
		{
			if (*p == *q)
			{
				p++;
				q++;
			}
			else
				break;
		}
		if (*q == 0)
		{
			tmp = p;
		}
		p++;

	}
	return tmp;
}
int main()
{
	char arr[MAX];
	while (getline(arr, MAX))
	{
		if (mystrstr(arr, "ould") != NULL)
			printf("%s", arr);

	}
	system("pause");
	return 0;
}