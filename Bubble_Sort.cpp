#include <stdio.h>

int main(void){
    int array[10] = {2,4,1,3,8,5,9,7,6,10};
	int temp; 
	
    //정렬 전 리스트의 모습
    for(int i=0;i<10; i++){
    	printf("%d ",array[i]);
    	printf("\n");
	}    
    
    //구현하기 쉽지만 효율성이 가장 떨어진다
	for(int i = 9; i >= 0; i--){
		for(int j = 0; j<i; j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
    
     //정렬 후 리스트의 모습
    for(int i=0;i<10; i++){
    	printf("%d ",array[i]);
    	printf("\n");
	}
 
	return 0;   
}