#include <stdio.h>

int main(void){
    int array[10] = {2,4,1,3,8,5,9,7,6,10};
    int index, min, temp;

	// 정렬전 리스트의 모습    
    for(int i=0; i<10; i++){
    	printf("%d ",array[i]);
    	printf("\n");
	}
    
    // 정렬 과정
	for(int i = 0; i<10; i++){
    	min = 9999;

		for(int j=i; j<10; j++ ){
    		if(min > array[j]){
    			index = j;
    			min = array[j];
			}
		}	
    		
    	temp = array[index];
    	array[index] = array[i];
    	array[i] = temp;
	}
    
    //정렬 후 리스트의 모습
    for(int i=0;i<10; i++){
    	printf("%d ",array[i]);
    	printf("\n");
	}
    
    return 0;
}
