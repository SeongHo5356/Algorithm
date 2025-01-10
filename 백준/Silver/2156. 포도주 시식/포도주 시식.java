import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nLength = sc.nextInt();

        if (nLength == 0) {
            System.out.println(0);
            return;
        }

        int[] arr = new int[nLength + 1];
        int[] dp = new int[nLength + 1];

        for (int i = 1; i <= nLength; ++i) {
            arr[i] = sc.nextInt();
        }

        // 초기화
        dp[1] = arr[1];
        if (nLength > 1) {
            dp[2] = arr[1] + arr[2];
        }
        if (nLength > 2) {
            dp[3] = Math.max(arr[1] + arr[2], Math.max(arr[1] + arr[3], arr[2] + arr[3]));
        }

        // DP 점화식 적용
        for (int i = 4; i <= nLength; ++i) {
            dp[i] = Math.max(dp[i - 1], Math.max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]));
        }

        // 결과 출력
        System.out.println(dp[nLength]);
    }
}
