#include <stdio.h>

int number = 10;
int data[10] = {2,4,1,3,8,5,9,7,6,10};

void quickSort(int *data, int start, int end ){
	if(start >= end){ // 원소가 1개인 경우
		return;
	}
	
	int key = start; // 키는 첫번째 원소
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i <= j){ //엇갈릴 때까지 반복
		while(data[i] <= data[key]){
			i++;
		}
		while(data[j] >= data[key] && j > start){
			j--;
		}
		if(i > j){ // 현재 엇갈린 상태면 키 값과 교체
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		} else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);
	
}

int main(void){

	// 정렬전 리스트의 모습    
    for(int i=0; i<10; i++){
    	printf("%d ",data[i]);
	}
	printf("\n");
    
    // 정렬 과정
    quickSort(data, 0, number-1); 

    //정렬 후 리스트의 모습
    for(int i=0;i<10; i++){
    	printf("%d ",data[i]);
	}
    
    return 0;
}