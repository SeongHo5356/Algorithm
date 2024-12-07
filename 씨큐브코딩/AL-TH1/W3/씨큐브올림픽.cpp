#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	int n,m;
	int max = 0;
	int min = 100;
	int sum = 0;
	vector<int> v;
	scanf("%d", &n);
	
	for(int i=0;i<n;i++){
		scanf("%d", &m);
		sum += m;
		if (min > m) min = m;
		if (max < m) max = m;
	}	
	printf("%d",(sum - max - min)/(n-2));
}
