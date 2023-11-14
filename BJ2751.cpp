#include<stdio.h>
#include<algorithm>

int number, data[10000001];

int main(void){
	scanf("%d", &number);
	for(int i =0;i<number;i++){
		scanf("%d", &data[i]);
	}
	std::sort(data,data+number);
	
	for(int i =0;i<number;i++){
		printf("%d ", data[i]);
	} 
	return 0;
}