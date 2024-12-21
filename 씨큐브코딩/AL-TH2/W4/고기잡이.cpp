#include <stdio.h>
#include <algorithm>
using namespace std;

#define inside(a, b, c) ((a) <= (c) && (c) <= (b))

int N, M, L;
int X[1000], Y[1000];
int Fx[1000], Fy[1000];

int main() {
    int i, j, k;
    int w, h;
    int cnt;
    int ans = 0;

    // �Է� �ޱ�
    scanf("%d%d%d", &N, &L, &M);
    for (i = 0; i < M; i++) {
        scanf("%d%d", &Fx[i], &Fy[i]);
        X[i] = Fx[i];
        Y[i] = Fy[i];
    }

    // X�� Y ��ǥ ����
    sort(X, X + M);
    sort(Y, Y + M);

    // L/2�� ����Ͽ� ������ �� ���
    L /= 2;

    // ������ ��� (w, h) ���� �ݺ�
    for (w = 1; w < L; w++) {
        h = L - w;

        // �׹��� ���� ������ (X[i], Y[j]) �ݺ�
        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                cnt = 0;

                // ����Ⱑ �׹� �ȿ� ���ԵǴ��� �˻�
                for (k = 0; k < M; k++) {
                    if (inside(X[i], X[i] + w, Fx[k]) &&
                        inside(Y[j], Y[j] + h, Fy[k])) {
                        cnt++;
                    }
                }

                // �ִ� ���� ����� �� ����
                if (ans < cnt) ans = cnt;
            }
        }
    }

    // ��� ���
    printf("%d", ans);
    return 0;
}

