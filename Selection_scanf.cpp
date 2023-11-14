#include <stdio.h>
int array[1001];

int main(void){
	int index,number, temp;
	scanf("%d", &number);
	for(int i =0; i<number; i++){
		scanf("%d", &array[i]);
	}	
	
	for(int i =0;i<number;i++){
		index = i; 
		for(int k = i+1 ; k < number; k++ ){
			if(array[i] > array[k]){
				index = k;
				printf("index changed to %d\n", index);
			}
		}
		if(index != i){
			printf("index is %d, i is %d\n", index, i);
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
		}
		for(int m=0;m<number;m++){
			printf("%d ", array[m]);
		}
		printf("\n");
	}
	return 0;
}