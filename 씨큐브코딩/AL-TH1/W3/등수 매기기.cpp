#include <stdio.h>
#include <vector> 

using namespace std;

int main(){
	int n,m;
	vector<int> v;
	vector<int> v2;
	
	scanf("%d", &n);
	for(int i =0;i<n;i++){
		scanf("%d", &m);
		v.push_back(m);
		v2.push_back(1);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (v[i]<v[j]) v2[i]++;
		}
	}
	
	for(int i =0;i<n;i++){
		printf("%d", v2[i]);
	}
	
	return 0; 
}
