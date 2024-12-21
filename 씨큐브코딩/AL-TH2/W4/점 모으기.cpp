#include <cstdio>
#include <algorithm>
using namespace std;

const int M = 100100; // 최대 점 개수 정의
int n, m, x[M], y[M], X, Y;
int s;

int main() {
    int i;

    // 입력받기: n(격자 크기), m(점의 개수)
    scanf("%d%d", &n, &m);
    for (i = 0; i < m; ++i)
        scanf("%d%d", &x[i], &y[i]); // 각 점의 x, y 좌표 입력받기

    // x좌표와 y좌표 각각 정렬
    sort(x, x + m);
    sort(y, y + m);

    // 중앙값 찾기
    X = x[m / 2];
    Y = y[m / 2];

    // 최소 이동 거리 계산
    s = 0;
    for (i = 0; i < m; ++i)
        s += abs(X - x[i]) + abs(Y - y[i]); // Manhattan 거리 합산

    // 결과 출력
    printf("%d\n", s);
    return 0;
}

