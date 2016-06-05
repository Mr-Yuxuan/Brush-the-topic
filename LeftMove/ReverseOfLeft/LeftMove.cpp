#include<stdio.h>
#include<stdlib.h>
void Reverse(char *start, char *end)
{
	if (start == NULL || end == NULL)
		return;
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
char *LeftMove(char *src, int n)
{
	char *start = src;
	char *end = src;
	char *mun = src + n - 1;
	while (*end != '\0')
		end++;
	end--;
	Reverse(start, mun);
	Reverse(mun + 1, end);
	Reverse(start, end);
	return src;
}
int main()
{
	char str[10] = "abcdeg";
	int n = 0;
	char *newstr = NULL;
	scanf_s("%d", &n);
	newstr = LeftMove(str, n);
	printf("%s\n", newstr);
	system("pause");
	return 0;
}