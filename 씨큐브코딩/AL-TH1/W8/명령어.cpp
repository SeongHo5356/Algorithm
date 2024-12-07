#include <iostream>
#include <string>

using namespace std;

int main() {
    int A,B,N; // 명령어의 횟수
    string cur, temp;
	
	cin >> N;
	for(int i=0;i<N;i++){
			
		scanf("%d", &A);
		if(A==0){
			cin >> B >> temp;
			cur = cur.substr(0,B)+temp+cur.substr(B);
			cout << cur << '\n';
		}	
		else if(A==1){
			cin >> B;
			cur = cur.substr(0,B-1)+cur.substr(B);
			cout << cur << '\n';
		}
		else{
			//printf("%s", cur);
			cout << cur << '\n';
		}
	}
	
	return 0;
}

