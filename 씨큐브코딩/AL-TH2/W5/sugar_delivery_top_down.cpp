#include<cstdio>
#include<algorithm>
#define INF 1234567890
using namespace std;

int n, d[5001];

int solve(int i)
{
    // 기본 종료 조건
    if (i == 0)
        return 0;  // 0kg는 0개의 패키지로 배달 가능
    if (i < 0)
        return INF;  // 음수는 불가능한 경우이므로 INF로 처리

    // 이미 계산된 값이 있으면 그 값을 반환
    if (d[i] < INF)
        return d[i];

    // i-3과 i-5에서 최소 패키지 수를 찾고, 1개를 더해서 최소 패키지 수를 구함
    int ret = min(solve(i - 3), solve(i - 5)) + 1;

    // 결과를 저장하고 반환
    d[i] = ret;
    return ret;
}

int main()
{
    for (int i = 0; i < 5001; i++)
        d[i] = INF;

    scanf("%d", &n);
    int ans = solve(n);

    // 결과 출력
    if (ans < INF)
        printf("%d", ans);
    else
        printf("-1");
}

