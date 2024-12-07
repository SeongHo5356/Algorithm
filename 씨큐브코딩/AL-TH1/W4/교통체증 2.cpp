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
		int sum_row = 0;
		int sum_col = 0;
		for (int j =1; j<m+1;j++){
			sum_row+=cars[j][i];
			sum_col+=cars[i][j];
		}
		//printf("%d, %d, %d\n", i, sum_row, sum_col);
		if (sum_row > sum_col) printf("%d ", i);
	}

	return 0; 
}
