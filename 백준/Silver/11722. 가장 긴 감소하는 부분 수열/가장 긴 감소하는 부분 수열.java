import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        
        int[] arr = new int[num];
        int[] dp = new int[num];
        
        // 수열 입력
        for (int i = 0; i < num; i++) {
            arr[i] = sc.nextInt();
        }
        
        // DP 배열 초기화
        for (int i = 0; i < num; i++) {
            dp[i] = 1; // 각 원소만 포함하는 부분 수열의 길이는 1
        }
        
        // DP 점화식 계산
        for (int i = 1; i < num; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[i]) { // 감소 조건
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                }
            }
        }
        
        // 결과: dp 배열의 최댓값
        int maxLength = 0;
        for (int i = 0; i < num; i++) {
            maxLength = Math.max(maxLength, dp[i]);
        }
        
        System.out.println(maxLength);
    }
}
