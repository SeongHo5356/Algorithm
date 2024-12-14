#include <cstdio>
#include <stack>
using namespace std;

int main() {
    char a[100001];
    scanf("%s", a);  // 괄호 문자열을 입력받습니다.
    
    stack<int> s;  // 스택을 사용하여 열린 괄호를 추적합니다.
    int ans = 0;  // 잘린 쇠막대기 조각의 총 개수
    
    for (int i = 0; a[i]; i++) {  // 괄호 문자열을 하나씩 처리
        if (a[i] == '(') {
            s.push(i);  // '('는 스택에 푸시
        } else {
        	printf("%d ",s.top());
            if (s.top() + 1 == i) {
                s.pop();  // 레이저인 경우, 스택에서 하나를 pop
                ans += s.size();  // 열린 쇠막대기 수만큼 조각이 잘림
            } else {
                s.pop();  // 쇠막대기 종료인 경우, 스택에서 하나를 pop
                ans += 1;  // 하나의 조각이 추가됨
            }
        }
    }

    printf("%d\n", ans);  // 결과 출력
    return 0;
}

