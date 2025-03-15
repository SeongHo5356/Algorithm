import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

import static java.lang.System.in;

public class Main {
    static int[][] board;
    static int N;
    static int[][][] dp;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        board = new int[N][N];
        dp = new int[N][(1 << N)][10];
        for (int i = 0; i < N; i++) {
            String s = br.readLine();
            for (int j = 0; j < N; j++) {
                board[i][j] = s.charAt(j) - '0';
            }
        }


        int dfs = DFS(0, 1, 0);
        System.out.println(dfs + 1);

    }

    private static int DFS(int start, int visit, int cur) {
        if (visit == (1 << N) - 1) {
            return dp[start][visit][cur];
        }
        if (dp[start][visit][cur] != 0) {
            return dp[start][visit][cur];
        }
        for (int i = 0; i < N; i++) {
            if ((visit & (1 << i)) != 0) continue;
            if (cur <= board[start][i]) {
                dp[start][visit][cur] = Math.max(dp[start][visit][cur], DFS(i, (visit | (1 << i)), board[start][i]) + 1);
            }
        }
        return dp[start][visit][cur];
    }
}

