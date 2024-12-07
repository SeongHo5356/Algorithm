#include <cstdio>

int main(){
	char str[1001];
	scanf("%[^\n]", str);
	for(int i =0; str[i]; i++){
		if ('A'<=str[i]&&str[i]<='Z'){
			str[i]+=32; 
		}
		printf("%c", str[i]);
	}
	return 0;
}
