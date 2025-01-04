#include<cstdio>
#include<algorithm>
#define INF 1234567890
using namespace std;

int n, d[5001];

int solve(int i)
{
    // �⺻ ���� ����
    if (i == 0)
        return 0;  // 0kg�� 0���� ��Ű���� ��� ����
    if (i < 0)
        return INF;  // ������ �Ұ����� ����̹Ƿ� INF�� ó��

    // �̹� ���� ���� ������ �� ���� ��ȯ
    if (d[i] < INF)
        return d[i];

    // i-3�� i-5���� �ּ� ��Ű�� ���� ã��, 1���� ���ؼ� �ּ� ��Ű�� ���� ����
    int ret = min(solve(i - 3), solve(i - 5)) + 1;

    // ����� �����ϰ� ��ȯ
    d[i] = ret;
    return ret;
}

int main()
{
    for (int i = 0; i < 5001; i++)
        d[i] = INF;

    scanf("%d", &n);
    int ans = solve(n);

    // ��� ���
    if (ans < INF)
        printf("%d", ans);
    else
        printf("-1");
}

