#include <cstdio>
#include <stack>

using namespace std;

int main(){
    int num;
    scanf("%d", &num);  // 탑의 개수 입력
    
    int arr[500001];  // 탑의 높이 배열
    int ans[500001];  // 각 탑에서 레이저 신호를 수신한 탑 배열
    
    // 탑들의 높이 입력 받기
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    
    // 스택 선언: 스택은 탑의 인덱스를 저장
    stack<int> s;

    // 결과 배열을 0으로 초기화
    for(int i = 0; i < num; i++) {
        // 현재 탑보다 높이가 더 큰 탑을 찾을 때까지 스택에서 pop
        while (!s.empty() && arr[s.top()] < arr[i]) {
            s.pop();
        }
        
        // 스택이 비지 않았다면, 가장 최근에 들어온 탑이 수신 탑
        if (!s.empty()) {
            ans[i] = s.top() + 1;  // 스택에는 인덱스가 저장되어 있으므로 1을 더해주기
        } else {
            ans[i] = 0;  // 수신하는 탑이 없다면 0
        }

        // 현재 탑의 인덱스를 스택에 넣는다
        s.push(i);
    }

    // 결과 출력
    for(int i = 0; i < num; i++){
        printf("%d ", ans[i]);
    }
    
    return 0;
}

