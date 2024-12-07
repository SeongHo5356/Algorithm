#include <stdio.h>

int main(){
	int N, temp;
	int cnt = 0;
	scanf("%d", &N);
	while(N >= 10){
		temp = 0;
		while(N){
			temp += N % 10;
			N /= 10 ;
		}
		N = temp;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
