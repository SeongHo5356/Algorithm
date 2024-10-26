#include <cstdio>

int main(){
	char str[1001];
	int cnt[26] = {0,};
	scanf("%s", str);
	
	for(int i =0; str[i]; i++){
		if ('a' <= str[i] && str[i] <= 'z'){
			cnt[str[i]-'a']++;
			printf("%c ", str[i]);
			printf("위치 : %d |", str[i]-'a');
			for(int i=0;i<26; i++){
				printf("%d ", cnt[i]);
			}
			printf("\n");
		}
		
		else{
			cnt[str[i]-'A']+=1;
			printf("%c ", str[i]);
			printf("위치 : %d |", str[i]-'A');
			for(int i=0;i<26; i++){
				printf("%d ", cnt[i]);
			}
			printf("\n");
		}
	}
	for(int i=0;i<26; i++){
		printf("%d ", cnt[i]);
	}
	
	return 0;
}
