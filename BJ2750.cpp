#include <stdio.h>

int main(){
	int number;
	scanf("%d", &number);
	int data[number];
	for(int i = 0; i < number; i++){
		scanf("%d", &data[i]);
	}
	
	for(int i = 0 ; i<number; i++){
		for(int j = i; j > 0; j--){
			if (data[j] < data[j-1] && j-1 > 0 ){
				int temp = data[j];
				data[j] = data[j-1];
				data[j-1] = data[j];
			}
		}
			
	}
	
/*	for(int i = number - 1; i >= 0; i--){
		for(int j = 0; j < i; j++){
			if(data[j]>data[j+1]){
				int temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}*/
	
	for(int i =0; i<number; i++){
		printf("%d ", data[i]);
	}
	
	
	
	return 0;
}