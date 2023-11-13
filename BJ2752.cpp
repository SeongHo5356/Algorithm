#include <stdio.h>

int array[3];

int main(void){
	int temp;
	for(int i = 0; i < 3;i++){
		scanf("%d", &array[i]);
	}
	
	for(int i = 2; i >= 0; i--){
		for(int j = 0; j<i; j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
    for(int i=0;i<3; i++){
    	printf("%d ",array[i]);
	}
 	
	
	
	return 0;
}