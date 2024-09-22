#include <stdio.h>

int main(){
	int N,M;
    int cnt = 0;
    int ans = 0;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		cnt = 0;
        scanf("%d", &M);
		for (int j=1;j<=M;j++){
			if (M%j == 0){
				cnt++;
			}
		}
		if (cnt == 2){
			ans +=1;
		}
	}
	printf("%d", ans);
    
	return 0;
}