#include <cstdio>

int sum_digits(int num, int sum){
	if (num == 0) return sum;
	return sum_digits(num/10, sum+(num%10));
}


int main(){
	int num;
	scanf("%d", &num);
	printf("%d", sum_digits(num, 0));
	return 0;
} 
