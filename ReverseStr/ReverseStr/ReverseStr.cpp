#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ReverseStr(char *start, char *end)
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
char *Reverse(char *src)
{
	char *start = src;
	int len = strlen(src);
	char *end = src + len - 1;
	if (src == NULL)
		return NULL;
	/*while (*end != '\0')
	end++;
	end--;*/
	ReverseStr(start, end);
	start = end = src;
	while (*start != '\0')
	{
		if (*start == ' ')
		{
			start++;
			end++;
		}
		else if (*end == ' ' || *end == '\0')
		{
			end--;
			ReverseStr(start, end);
			start = ++end;
		}
		else
		{
			end++;
		}
	}
	return src;
}
int main()
{
	char string[30] = "I am a studnt";
	char *newstr = Reverse(string);
	printf("%s\n", newstr);
	system("pause");
	return 0;
}