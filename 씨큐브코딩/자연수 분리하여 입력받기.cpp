#include <stdio.h>

int main(){
	int num;
	int sum = 0;
	for(int i =0; i<4; i++){
		scanf("%1d", &num);
		sum += num;
	}
	printf("%d", sum);
	
}
