#include <stdio.h>

using namespace std;

int m[100];
int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        m[n] = fib(n-1) + fib(n-2);
        return m[n];
    }
}

int main(){
	printf("%d", fib(6));
}
