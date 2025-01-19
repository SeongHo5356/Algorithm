import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        // 입력 문자열 길이
        int n = input.length();

        // dp 배열 초기화 (dp[i]는 i번째까지 해석할 수 있는 방법의 수)
        int[] dp = new int[n + 1];

        // 초기값 설정
        dp[0] = 1; // 빈 문자열은 1가지 방법 (아무것도 해석하지 않는 경우)
        
        // 첫 번째 문자에 대한 처리
        if (input.charAt(0) != '0') {
            dp[1] = 1; // 첫 문자가 0이 아니면 1가지 방법
        }

        // dp 배열을 채우는 과정
        for (int i = 2; i <= n; i++) {
            // 한 자릿수 처리
            int oneDigit = Integer.parseInt(input.substring(i - 1, i)); // input[i-1]
            if (oneDigit > 0) { // 0은 알파벳으로 해석할 수 없음
                dp[i] += dp[i - 1];
            }

            // 두 자릿수 처리
            int twoDigit = Integer.parseInt(input.substring(i - 2, i)); // input[i-2, i-1]
            if (twoDigit >= 10 && twoDigit <= 26) { // 10~26은 알파벳으로 해석할 수 있음
                dp[i] += dp[i - 2];
            }

            // 계산한 값이 매우 커질 수 있으므로 1000000으로 나눈 나머지를 저장
            dp[i] %= 1000000;
        }

        // 최종 해석 방법의 수
        System.out.println(dp[n]);
    }
}
