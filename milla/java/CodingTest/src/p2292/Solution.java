// src/problem1/Solution.java
package p2292;

import java.io.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int N = Integer.parseInt(input[0]);

        int cnt = 1;
        int sum = 1;

        while (N > sum) {
            sum = sum + 6 * cnt;
            cnt++;
        }
        System.out.println(cnt);
    }
}
