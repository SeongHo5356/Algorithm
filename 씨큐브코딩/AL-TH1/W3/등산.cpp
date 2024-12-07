#include <stdio.h>
#include <vector> 

using namespace std;

int main(){
	int n,m,si,sj,dist;
	int max = 0;
	
	vector<int> v;
	scanf("%d", &n);
	for(int i =0;i<n;i++){
		scanf("%d", &m);
		v.push_back(m);
	}
	for(int i=0; i<n-1;i++){
		dist = v[i+1]-v[i];
		if (dist > 0){
			if (dist > max){
				max = dist;
				si = i+1;
				sj = i+2;	
			}
		}
	}
	if (max == 0) printf("0");
	else printf("%d %d", si,sj);
	
	return 0;
}
