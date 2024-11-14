import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder builder = new StringBuilder();

        int T = Integer.parseInt(br.readLine());

        for (int tc = 0; tc < T; tc++) {

            String[] input = br.readLine().split(" ");

            int x1 = Integer.parseInt(input[0]);
            int y1 = Integer.parseInt(input[1]);
            int r1 = Integer.parseInt(input[2]);

            int x2 = Integer.parseInt(input[3]);
            int y2 = Integer.parseInt(input[4]);
            int r2 = Integer.parseInt(input[5]);

            builder.append(solution(x1, y1, r1, x2, y2, r2))
                .append("\n");
        }

        System.out.print(builder);
    }

    static int solution(int x1, int y1, int r1, int x2, int y2, int r2) {

        if (x1 == x2 && y1 == y2 && r1 == r2) {
            return -1;
        }

        double dis = (Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2)));
        double sum = r1 + r2;
        double sub = Math.abs(r1 - r2);

        if (dis > sum || dis < sub) {
            return 0;
        } else if (dis == sum || dis == sub) {
            return 1;
        } else if (sub < dis && dis < sum) {
            return 2;
        }

        return -1;
    }
}