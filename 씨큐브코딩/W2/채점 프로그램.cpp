#include <stdio.h>

int main(){
	int N, my, count;
	int answer[1000001];
	
	scanf("%d", &N);
	for(int i =0; i<N;i++){
		scanf("%d", &answer[i]);
	}
	for(int j =0;j<N;j++){
		scanf("%d", &my);
		if (my == answer[j]) count++;
	}
	printf("%d", count);
	
	return 0;
}
