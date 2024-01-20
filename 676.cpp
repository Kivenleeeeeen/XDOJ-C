#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char str[60] = "0";
	gets_s(str);//VS已经禁用gets,故使用gets_s
	int i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'M' && str[i] >= 'A')
			str[i] += 13;
		else if (str[i] <= 'Z' && str[i] >= 'N')
			str[i] -= 13;
		else if (str[i] <= 'm' && str[i] >= 'a')
			str[i] += 13;
		else if (str[i] <= 'z' && str[i] >= 'n')
			str[i] -= 13;
		//ASCII谁愿意记谁记吧
	}
	printf("%s", str);
	return 0;
}