#include <iostream>
using namespace std;

// 최대값을 구하는 함수
int Max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    cin >> n;  // 계단의 개수 입력

    int stair[301];  // 각 계단의 점수를 저장할 배열
    int dp[301];     // dp 배열: i번째 계단에 도달했을 때의 최대 점수

    // 계단 점수 입력
    for (int i = 0; i < n; i++) {
        cin >> stair[i];
    }

    // 초기 조건: 첫 번째 계단과 두 번째 계단의 경우를 미리 계산
    dp[0] = stair[0];
    dp[1] = Max(stair[0] + stair[1], stair[1]);
    dp[2] = Max(stair[0] + stair[2], stair[1] + stair[2]);

    // DP 배열을 채우면서 최대 점수를 계산
    for (int i = 3; i < n; i++) {
        dp[i] = Max(dp[i-2] + stair[i], stair[i-1] + stair[i] + dp[i-3]);
    }

    // 마지막 계단에 도달했을 때의 최대 점수를 출력
    cout << dp[n - 1] << '\n';

    return 0;
}

