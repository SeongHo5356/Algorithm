#include <stdio.h>

int main(void){
    int array[10] = {2,4,1,3,8,5,9,7,6,10};
	int temp;
	// 정렬전 리스트의 모습    
    for(int i=0; i<10; i++){
    	printf("%d ",array[i]);
	}
	printf("\n");
    
    // 정렬 과정
	for(int i = 0; i < 10; i++){
		int j = i;
		
		while(array[j] >= array[j+1] && j >= 0){
			temp = array[j];
    		array[j] = array[j+1];
    		array[j+1] = temp;
    		j--;
		}
		
	}
    
    //정렬 후 리스트의 모습
    for(int i=0;i<10; i++){
    	printf("%d ",array[i]);
	}
    
    return 0;
}
