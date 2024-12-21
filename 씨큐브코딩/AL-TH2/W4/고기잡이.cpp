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

    // 입력 받기
    scanf("%d%d%d", &N, &L, &M);
    for (i = 0; i < M; i++) {
        scanf("%d%d", &Fx[i], &Fy[i]);
        X[i] = Fx[i];
        Y[i] = Fy[i];
    }

    // X와 Y 좌표 정렬
    sort(X, X + M);
    sort(Y, Y + M);

    // L/2를 사용하여 가능한 폭 계산
    L /= 2;

    // 가능한 모든 (w, h) 조합 반복
    for (w = 1; w < L; w++) {
        h = L - w;

        // 그물을 놓을 시작점 (X[i], Y[j]) 반복
        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                cnt = 0;

                // 물고기가 그물 안에 포함되는지 검사
                for (k = 0; k < M; k++) {
                    if (inside(X[i], X[i] + w, Fx[k]) &&
                        inside(Y[j], Y[j] + h, Fy[k])) {
                        cnt++;
                    }
                }

                // 최대 잡은 물고기 수 갱신
                if (ans < cnt) ans = cnt;
            }
        }
    }

    // 결과 출력
    printf("%d", ans);
    return 0;
}

