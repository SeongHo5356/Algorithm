#include <cstdio>

int main(){
	int num;
	int heights[100001] = {0,};
	scanf("%d", &num);
	
	
	for (int i=1;i<=num;i++){
		scanf("%d", &heights[i]);
	}
	
	int mx_height = 0;
	int cnt = 0;
	
	for(int i=num;i>0;i--){
		if (mx_height < heights[i]){
			mx_height = heights[i];
			cnt++;	
		} 
	}
	
	printf("%d", cnt);
	
	return 0;
}
