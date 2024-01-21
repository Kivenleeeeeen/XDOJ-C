#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[101];
	gets(a);//xdoj不认'gets_s'不用运行直接提交即可（VS用户）
	int sum = 0;
	for (int i = 0; a[i] != '\0'; i++)
	{
		sum += a[i];
	}
	printf("%d", sum & 0xff);
	return 0;
}
