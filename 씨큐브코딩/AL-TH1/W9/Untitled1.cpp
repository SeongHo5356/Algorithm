#include <stdio.h>

int main() {
	
	int n, cnt=0;
	scanf("%d", &n);
	
	while(n>0) {
		cnt++;
		printf("%d %d \n", n, cnt);
		n = n/10;
	}

	return 0;	
	
}
