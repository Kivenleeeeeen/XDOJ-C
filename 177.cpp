#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[101];
	gets(a);//xdoj����'gets_s'��������ֱ���ύ���ɣ�VS�û���
	int sum = 0;
	for (int i = 0; a[i] != '\0'; i++)
	{
		sum += a[i];
	}
	printf("%d", sum & 0xff);
	return 0;
}