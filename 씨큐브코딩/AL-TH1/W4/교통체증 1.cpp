#include <stdio.h>

int main(){
	int m,n;
	int from,to,car;
	int cars[101][101] = {0,};
	scanf("%d %d", &m,&n);
	for(int i =0;i<n;i++){
		scanf("%d %d %d", &from, &to, &car);
		if (cars[from][to] < car) cars[from][to] = car;		
	}
	
	for(int i =1;i<m+1;i++){
		for(int j = 1;j<m+1;j++){
			printf("%d ", cars[i][j] );
		}
		printf("\n");
	}
	
	return 0;
} 
