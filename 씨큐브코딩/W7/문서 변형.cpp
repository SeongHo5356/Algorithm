#include<stdio.h>

int main() {
	char s[1001];
	char fine_arts[9] = "finearts";
	scanf("%s",s);
	for (int i = 0; s[i]; i++)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 'a';
		int check = 0;
		for (int j = 0; fine_arts[j]; j++)
			if (s[i] == fine_arts[j])
				check = 1;
		if (!check)
			printf("%c",s[i]);
	}
	return 0;
}
