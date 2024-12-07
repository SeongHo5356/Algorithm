#include <cstdio>

int main(){

	int sum = 0;
	int num;
	
	for (int i =0 ; i<5;i++){
		scanf("%1d", &num);
		sum += (num*num);
	}
	printf("%d", sum%10);
	return 0;
}
 	
