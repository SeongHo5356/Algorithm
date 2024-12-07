#include<stdio.h>

int main() {
	int n;
	char a[10001], b[10001];
	scanf("%d", &n);
	scanf("%s %s",a, b);
	for (int i = 0; a[i]; i++)
	{
		int check = 0;
		for (int j = 0; b[j]; j++)
		{
			if (a[(i + j) % n] != b[j])
				check = 1;
		}
		if (!check)
		{
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	return 0;
}
