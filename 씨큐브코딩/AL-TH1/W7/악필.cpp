#include<stdio.h>

int main() {
	char str1[11], str2[11];
	int num1 = 0, num2 = 0;
	scanf("%s %s", str1, str2);
	for (int i = 0; str1[i]; i++)
	{
		if (str1[i] == '6')
			str1[i] = '5';
		num1 = num1 * 10 + str1[i] - '0';
	}
	for (int i = 0; str2[i]; i++)
	{
		if (str2[i] == '6')
			str2[i] = '5';
		num2 = num2 * 10 + str2[i] - '0';
	}
	printf("%d ",num1 + num2);
	num1 = 0; num2 = 0;
	for (int i = 0; str1[i]; i++)
	{
		if (str1[i] == '5')
			str1[i] = '6';
		num1 = num1 * 10 + str1[i] - '0';
	}
	for (int i = 0; str2[i]; i++)
	{
		if (str2[i] == '5')
			str2[i] = '6';
		num2 = num2 * 10 + str2[i] - '0';
	}
	printf("%d ", num1 + num2);
}

