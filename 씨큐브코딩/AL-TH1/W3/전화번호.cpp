#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	int m;
	int max = 0;
	vector<int> v(10);
	
	for(int i=0;i<8;i++){
		scanf("%1d",&m);
		v[m] += 1;
	}
	
	temp = (v[6] + v[9]+1)/2;
	v[6] =temp;
	v[9] =temp;
	
	for(int i =0;i<10;i++){
		if (max<v[i]) max = v[i];
	}
	
	printf("%d", max);
	
	return 0;
}
