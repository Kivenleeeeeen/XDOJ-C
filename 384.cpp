#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[21], i;
	for (i = 0; i < n + 1; i++)
	{
		scanf("%d", &a[i]);
	}
	int t = a[0];
	int max = -a[1];
	//int max = 0;
	int round = 1;
	//int round = 0;
	for (i = 2; i <= n; i++)//i=2
	{
		t += a[i];
		if (a[i]<0 && -a[i]>max)
		{
			max = -a[i];
			round = i;
		}
	}
	printf("%d %d", t, round);
	return 0;
	//����������û�п��ǵ�ȥ����ȫ��0ʱ��roundֵӦ��Ϊ1������0
}