#include <cstdio>
#include <stack>
#include <utility> 
using namespace std;

stack<pair<int, int> > s;  // (탑의 높이, 탑의 번호) 저장
int ans[500001];  // 각 탑에서 발사된 레이저 신호를 수신하는 탑의 번호

int main()
{
    int n, x;
    scanf("%d", &n);  // 탑의 개수
    s.push({ 999999999, 0 });  // 첫 번째에는 매우 큰 값으로 초기화, 비교를 위한 기준

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);  // 현재 탑의 높이 입력

        // 현재 탑의 높이 x보다 작은 탑들은 수신할 수 없으므로 pop
        while (s.top().first < x)
        {
            s.pop();
        }

        // 스택의 top에 있는 탑은 현재 탑의 레이저를 받을 수 있는 탑
        ans[i] = s.top().second;

        // 현재 탑을 스택에 추가
        s.push({ x, i + 1 });  // 탑의 높이와 번호 저장
    }

    // 결과 출력
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}

