#include <stdio.h>

int data[1001];

int main(){
	int number, temp;
	scanf("%d", &number);
	for(int i=0;i<number;i++){
		scanf("%d",&data[i]);
	}
	
	//Selection Sort
/*	for(int i =0;i<number; i++){
		int index = i;
		for(int k =i+1; k<number; k++){
			if(data[index]> data[k]){
				index = k;
			}
		}
		if(i != index){
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}
	}*/
	
	//Bubble Sort
/*	for(int i =0; i<number-1; i++){
		int j = i;
		while(j>=0 && data[j]>=data[j+1]){
			temp = data[j+1];
			data[j+1] = data[j];
			data[j] = temp;
			j--;
		}
	}*/
	
	//Insertion Sort
	for(int i =0; i< number; i++){
		for(int j = 0; j<number-1-i; j++){
			if(data[j]>data[j+1]){
				temp = data[j+1];
				data[j+1] = data[j];
				data[j] = temp;
			}
		}
	}
	
	
	for(int i =0; i<number; i++){
		printf("%d ", data[i]);
	}
		
	return 0;
}
