#include <cstdio>
#include <algorithm>
using namespace std;

#define N 200010 // 최대 공 개수

int n, sum[N], total, ans[N]; // 전역 변수
struct data {
    int num, size, color;
    bool operator<(const data &r) const {
        return size < r.size; // 공을 크기 순으로 정렬
    }
} b[N]; // 공 배열

int main() {
    int i, j = 1;

    // 입력 처리
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &b[i].color, &b[i].size);
        b[i].num = i; // 공 번호 저장
    }

    // 공 배열 크기 기준 정렬
    sort(b + 1, b + n + 1);

    // 크기 합 계산
    for (i = 1; i <= n; i++) {
        for (; b[j].size < b[i].size; j++) {
            sum[b[j].color] += b[j].size; // 색깔별 크기 합
            total += b[j].size;          // 전체 크기 합
        }

        // 점수 계산
        ans[b[i].num] = total - sum[b[i].color];
    }

    // 결과 출력
    for (i = 1; i <= n; i++) {
        printf("%d\n", ans[i]);
    }

    return 0;
}

