#include <stdio.h>

int main(){
	int map[100][100];
	int n,m,ci,cj;
	scanf("%d %d", &n,&m);
	for(int i =0; i<m;i++){
		for(int j =0;j<n;j++){
			scanf("%d", &map[i][j]);
			if (map[i][j] == 2){
				ci = i;
				cj = j;
			} 
		}
	}
	while(!(map[ci+1][cj] && map[ci][cj+1])){
		if (map[ci][cj+1] == 0) cj ++;
		else if(map[ci+1][cj] == 0) ci++;
	}
	
	printf("%d %d", ci, cj);
	
	
	return 0;
}
