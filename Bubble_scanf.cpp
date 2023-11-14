#include<stdio.h>

int array[1001];

int main(void){
	int number, temp;
	scanf("%d", &number);
	for(int i =0; i < number; i++){
		scanf("%d",&array[i]);
	}
	
	for(int i =0;i < number; i++){
		for(int k=0; k< number-1-i;k++){
			if(array[k] > array[k+1]){
				temp = array[k];
				array[k] = array[k+1];
				array[k+1]= temp;
			}
		}
		for(int m =0; m<number; m++){
			printf("%d ", array[m]);
		}
		printf("\n");
	}
	
	for(int i =0; i<number; i++){
		printf("%d ", array[i]);
	}

	return 0;
}