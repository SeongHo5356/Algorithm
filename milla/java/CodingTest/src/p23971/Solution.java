// src/problem1/Solution.java
package p23971;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int H = Integer.parseInt(input[0]);
		int W = Integer.parseInt(input[1]);
		int N = Integer.parseInt(input[2]);
		int M = Integer.parseInt(input[3]);
        int f = (H-1)/(N+1)+1; 
        int s = (W-1)/(M+1)+1;

        System.out.println(f * s);
    }
}
