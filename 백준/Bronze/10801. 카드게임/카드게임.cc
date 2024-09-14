#include <stdio.h>

int main(){ 
	int win_A = 0;
	int win_B = 0;
	int A[10];
	int B;
	
	for(int i = 0; i<10;i++){
		scanf("%d",&A[i]);
	}
	
	for(int i = 0; i<10;i++){
		scanf("%d",&B);
		if (A[i] < B) win_B +=1;
		if (A[i] > B) win_A +=1;
	}	
	if(win_A > win_B) printf("A");
	else if(win_A < win_B) printf("B");
	else printf("D");
	
	return 0;
} 