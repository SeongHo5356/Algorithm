#include <cstdio>
int hanoi_top(int n, int from, int to){
	if (n == 0) return 0 ; 
	hanoi_top( n - 1, from, 6-to-from);
	printf("%d %d %d\n",n, from, to);
	hanoi_top( n - 1, 6-to-from, to);
}

int main(){
	int num;
	scanf("%d", &num);	
	hanoi_top(num, 1, 3);
	return 0;
} 
