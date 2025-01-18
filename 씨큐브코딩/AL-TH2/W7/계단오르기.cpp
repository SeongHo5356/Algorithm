#include <iostream>
using namespace std;

// �ִ밪�� ���ϴ� �Լ�
int Max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    cin >> n;  // ����� ���� �Է�

    int stair[301];  // �� ����� ������ ������ �迭
    int dp[301];     // dp �迭: i��° ��ܿ� �������� ���� �ִ� ����

    // ��� ���� �Է�
    for (int i = 0; i < n; i++) {
        cin >> stair[i];
    }

    // �ʱ� ����: ù ��° ��ܰ� �� ��° ����� ��츦 �̸� ���
    dp[0] = stair[0];
    dp[1] = Max(stair[0] + stair[1], stair[1]);
    dp[2] = Max(stair[0] + stair[2], stair[1] + stair[2]);

    // DP �迭�� ä��鼭 �ִ� ������ ���
    for (int i = 3; i < n; i++) {
        dp[i] = Max(dp[i-2] + stair[i], stair[i-1] + stair[i] + dp[i-3]);
    }

    // ������ ��ܿ� �������� ���� �ִ� ������ ���
    cout << dp[n - 1] << '\n';

    return 0;
}

