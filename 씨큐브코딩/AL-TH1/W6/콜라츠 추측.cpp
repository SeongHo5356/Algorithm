#include<cstdio>

int collatz(int num, int time){
	if (num == 1) return time;
	if (num % 2 == 0) return collatz(num/2, time+1);
	else return collatz(num*3 + 1, time + 1); 
}

int main(){
	int num;
	scanf("%d", &num);
	printf("%d", collatz(num, 0));
	return 0;
} 
