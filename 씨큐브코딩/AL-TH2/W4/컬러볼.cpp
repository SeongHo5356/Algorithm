#include <cstdio>
#include <algorithm>
using namespace std;

#define N 200010 // �ִ� �� ����

int n, sum[N], total, ans[N]; // ���� ����
struct data {
    int num, size, color;
    bool operator<(const data &r) const {
        return size < r.size; // ���� ũ�� ������ ����
    }
} b[N]; // �� �迭

int main() {
    int i, j = 1;

    // �Է� ó��
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &b[i].color, &b[i].size);
        b[i].num = i; // �� ��ȣ ����
    }

    // �� �迭 ũ�� ���� ����
    sort(b + 1, b + n + 1);

    // ũ�� �� ���
    for (i = 1; i <= n; i++) {
        for (; b[j].size < b[i].size; j++) {
            sum[b[j].color] += b[j].size; // ���� ũ�� ��
            total += b[j].size;          // ��ü ũ�� ��
        }

        // ���� ���
        ans[b[i].num] = total - sum[b[i].color];
    }

    // ��� ���
    for (i = 1; i <= n; i++) {
        printf("%d\n", ans[i]);
    }

    return 0;
}

