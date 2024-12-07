#include <stdio.h>
#include <vector>

using namespace std; 

int main(){
	int n,m,node1,node2;
	vector<int> v[10001];
	scanf("%d %d", &n, &m);
	
	for (int i =0;i<m;i++){
		scanf("%d %d", &node1, &node2);
		v[node1].push_back(node2);
	}
	
	for (int i =1 ; i<n+1;i++){
		for(int j =0 ; j<v[i].size();j++) {
			printf("%d ", v[i][j]);
		}
		if (v[i].size() == 0) printf("0");
		printf("\n");
	}
	
	return 0;
}
