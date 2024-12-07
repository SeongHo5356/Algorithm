#include<cstdio>

int factorial(int n){
	if (n == 1) return 1;
	return n*factorial(n-1);
}

int main(){
	int a = factorial(3);
	printf("%d" , a);
	return 0;
}

