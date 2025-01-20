import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        int[] T = new int[N + 1];
        int[] P = new int[N + 1];
        int[] dp = new int[N + 2]; // N+1일까지 고려하기 위해 N+2 크기 배열 사용

        // 상담 정보 입력
        for (int i = 1; i <= N; i++) {
            T[i] = sc.nextInt();
            P[i] = sc.nextInt();
        }

        // dp 배열 업데이트
        for (int i = 1; i <= N + 1; i++) {
            // 이전 날까지의 최대 이익을 반영
            dp[i] = Math.max(dp[i], dp[i - 1]);

            // 상담이 가능한 경우
            if (i <= N && i + T[i] - 1 <= N) {
                dp[i + T[i]] = Math.max(dp[i + T[i]], dp[i] + P[i]);
            }
        }

        // 최대 이익 출력
        System.out.println(dp[N + 1]);
    }
}
