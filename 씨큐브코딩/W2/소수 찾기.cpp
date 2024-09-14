#include <stdio.h>

int main(){
	int N,M,cnt,ans = 0;
	scanf("%d", &N);
	scanf("%d", &M);
	for(int i=N+1; i<=M; i++){
		cnt = 0;
		for (int j=1;j<=i;j++){
			if (i%j == 0){
				cnt++;
			}
		}
		printf("현재 수 , 약수 갯수 : %d\t, %d\n", i, cnt);
		if (cnt == 2){
			printf("%d : 소수로 판정됨\n",i) ;
			ans +=1;
		}
	}
	printf("%d", ans);
	return 0;
}
