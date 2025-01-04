#include <stdio.h>

using namespace std;

int d[100];
int fib(int n) {
    d[1] = 1;
    d[2] = 1;
    for (int i=3; i<=n; i++) {
        d[i] = d[i-1] + d[i-2]; 
    }
    return d[n];
}

int main(){
	printf("%d", fib(6));
}
