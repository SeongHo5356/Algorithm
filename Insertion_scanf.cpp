#include<stdio.h>

int array[1001];

int main(void){
	int number, temp;
	scanf("%d", &number);
	for(int i =0; i < number; i++){
		scanf("%d",&array[i]);
	}
	
	for(int i=0;i<number-1;i++){
		int j = i;
		while(j>=0 && array[j]>=array[j+1]){
			temp = array[j];
			array[j]= array[j+1];
			array[j+1] = temp;
			j--;
		}
		for(int k=0;k<number;k++){
			printf("%d ", array[k]);
		}
		printf("\n");
	}
	
	
	return 0;
}