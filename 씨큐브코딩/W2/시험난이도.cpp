#include <stdio.h>

int main(){
	int N, score, sum;
	
	scanf("%d", &N);
	for(int i = 0; i<N;i++){
		scanf("%d", &score);
		sum += score;
	}
	int avg_scr = sum / N;
	if (avg_scr < 60){
		printf("%s", "Hard");
	}
	else if(avg_scr >=80){
		printf("%s", "Easy");
	}
	else{
		printf("%s", "Normal");
	}
	return 0;
}
