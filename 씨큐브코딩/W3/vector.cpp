#include <stdio.h>
#include <vector>

using namespace std;

int main(){
	vector<int> v;
	for(int i =0;i<10;i++){
		v.push_back(i+1);
	}

	for(int i=1;i<=10;i++){
		printf("%d\n", v[10-i]);
	}
	
	return 0;
}
