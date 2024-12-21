#include <cstdio>
#include <algorithm>
using namespace std;

const int M = 100100; // �ִ� �� ���� ����
int n, m, x[M], y[M], X, Y;
int s;

int main() {
    int i;

    // �Է¹ޱ�: n(���� ũ��), m(���� ����)
    scanf("%d%d", &n, &m);
    for (i = 0; i < m; ++i)
        scanf("%d%d", &x[i], &y[i]); // �� ���� x, y ��ǥ �Է¹ޱ�

    // x��ǥ�� y��ǥ ���� ����
    sort(x, x + m);
    sort(y, y + m);

    // �߾Ӱ� ã��
    X = x[m / 2];
    Y = y[m / 2];

    // �ּ� �̵� �Ÿ� ���
    s = 0;
    for (i = 0; i < m; ++i)
        s += abs(X - x[i]) + abs(Y - y[i]); // Manhattan �Ÿ� �ջ�

    // ��� ���
    printf("%d\n", s);
    return 0;
}

