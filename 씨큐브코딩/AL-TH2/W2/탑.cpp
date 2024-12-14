#include <cstdio>
#include <stack>
#include <utility> 
using namespace std;

stack<pair<int, int> > s;  // (ž�� ����, ž�� ��ȣ) ����
int ans[500001];  // �� ž���� �߻�� ������ ��ȣ�� �����ϴ� ž�� ��ȣ

int main()
{
    int n, x;
    scanf("%d", &n);  // ž�� ����
    s.push({ 999999999, 0 });  // ù ��°���� �ſ� ū ������ �ʱ�ȭ, �񱳸� ���� ����

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);  // ���� ž�� ���� �Է�

        // ���� ž�� ���� x���� ���� ž���� ������ �� �����Ƿ� pop
        while (s.top().first < x)
        {
            s.pop();
        }

        // ������ top�� �ִ� ž�� ���� ž�� �������� ���� �� �ִ� ž
        ans[i] = s.top().second;

        // ���� ž�� ���ÿ� �߰�
        s.push({ x, i + 1 });  // ž�� ���̿� ��ȣ ����
    }

    // ��� ���
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}

