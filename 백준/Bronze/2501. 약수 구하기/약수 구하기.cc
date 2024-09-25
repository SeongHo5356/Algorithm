#include<stdio.h>

int main(){
	int N, K;
	int cnt = 0;
	scanf("%d", &N);
	scanf("%d", &K); 
	
	for(int i=1; i<=N; i++){
		if (N % i == 0) cnt++;
		if (cnt == K){
			printf("%d", i);
			break;
		}
	}
	if (cnt < K) printf("0");
	return 0;
}