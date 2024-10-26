#include<stdio.h>

int main() {
	char str_origin[100001];
	char str_encrypt[100001] = {0,};
	int d, l, index = 0;
	scanf("%d %d", &l, &d);
	scanf("%s",str_origin);
	for (int i = 0; str_origin[i]; i++)
	{
		if (str_encrypt[index])
			index++;
		str_encrypt[index] = str_origin[i];
		index = index + d;
		if (index >= l) index = index - l;
	}
	printf("%s",str_encrypt);
}

