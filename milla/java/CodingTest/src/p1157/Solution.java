// src/problem1/Solution.java
package p1157;

import java.io.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String Uword = br.readLine().toUpperCase();

        int[] count = new int[26];
        for (int i = 0; i < Uword.length(); i++) {
            char c = Uword.charAt(i);
            count[c - 'A']++;
        }

        int max = 0;
        int flag = 0;
        char answer = '?';
        for (int i =0; i<count.length; i++){
            if (count[i] ==0) continue;
            else if (count[i] > max){
                max = count[i];
                flag = i;
                answer = (char) (i + 'A');
            } 
        }
        
        for (int i =0;i<count.length; i++){
            if (i == flag) continue;
            if (max == count[i]){
                answer = '?';
                break;
            }
        }
        System.out.println(answer);
    }
}
