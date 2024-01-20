#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int j = 0;
	char a[1000];
	char b[1000];
	gets_s(a);
	for (int i = 0; a[i]!='\0'; i++)
	{
		while (a[i] == '*' || a[i] == ' ')
		{
			i++;
		}
		b[j] = a[i];
		j++;
	}
	b[j] = '\0';
	for (int i = 0; b[i]!='\0'; i++)
	{
		printf("%c", b[i]);
	}
	return 0;
}
	/*int len = strlen(b);
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (b[j] > b[j + 1])
			{
				char t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;
			}
		}
	}
*/
	