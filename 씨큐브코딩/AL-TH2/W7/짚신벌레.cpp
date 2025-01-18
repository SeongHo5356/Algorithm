#include<cstdio>

int d[1000001];  // DP 배열 선언

int main()
{
    int start, end, death, n;
    scanf("%d %d %d %d", &start, &end, &death, &n);  // 입력 받기

    d[0] = 1;  // 첫 날에는 짚신벌레 1마리가 시작됨

    // dp[i]는 i일째 되는 날까지 살아있는 짚신벌레의 수를 나타냄
    for (int i = 1; i <= n; i++) {
        d[i] = d[i - 1];  // i일에는 기본적으로 어제와 같은 수
        if (i >= start)  // 번식 시작일
            d[i] += d[i - start];  // start일부터 번식 시작
        if (i >= end)  // 번식 종료일
            d[i] -= d[i - end];  // end일 이후에는 번식이 끝나므로 빼줌
        if (i >= death)  // 죽음이 발생하는 일
            d[i] -= d[i - death];  // death일 전 짚신벌레가 죽음

        d[i] = (d[i] + 1000) % 1000;  // 1000으로 나눈 나머지를 저장하여 음수 처리
    }

    // n일째 되는 날 살아 있는 짚신벌레 수 출력
    printf("%d", d[n]);
    return 0;
}

