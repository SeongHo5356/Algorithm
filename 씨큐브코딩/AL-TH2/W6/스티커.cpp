#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[2][100005];

int main(){
	int T,n,ans;
	
	scanf("%d",&T);
	
	while(T--){
		scanf("%d",&n);
		
		for(int i=0;i<2;i++)
			for(int j=2;j<=n+1;j++)
				scanf("%d",&arr[i][j]);
		
		for(int j=2;j<=n+1;j++){
			arr[0][j] += max(arr[1][j-1],arr[1][j-2]);
			arr[1][j] += max(arr[0][j-1],arr[0][j-2]);
		}
		
		ans = max(arr[0][n+1],arr[1][n+1]);
		
		printf("%d\n",ans);
	}
	
	return 0;
}
