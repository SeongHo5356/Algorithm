/******************************************************************************

 Online Java Compiler.
 Code, Compile, Run and Debug java program online.
 Write your code in this editor and press "Run" button to execute it.

 *******************************************************************************/
import java.util.*;
import java.lang.*;
import java.io.*;

public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nLength = sc.nextInt();


        while((nLength--)>0){
            // initialize list;
            int nArr = sc.nextInt();
            int[][] arr = new int[2][nArr+1];
            int[][] dp = new int[2][nArr+1];

            for(int i=0;i<2;i++){
                for(int j=1;j<nArr+1;j++){
                    arr[i][j] = sc.nextInt();
                }
            }

//            for(int i=0;i<2;i++){
//                for(int j=0;j<nArr+1;j++){
//                    System.out.println(arr[i][j]);
//                }
//                System.out.println('\n');
//            }

            dp[0][1] = arr[0][1];
            dp[1][1] = arr[1][1];

            for(int i=2;i<nArr+1;i++){
                dp[0][i] = Math.max(dp[1][i-1], dp[1][i-2]) + arr[0][i];
                dp[1][i] = Math.max(dp[0][i-1], dp[0][i-2]) + arr[1][i];
            }

//            for(int i=0;i<2;i++){
//                for(int j=0;j<nArr+1;j++){
//                    System.out.printf("%d ", dp[i][j]);
//                }
//                System.out.println('\n');
//            }

            System.out.println(Math.max(dp[0][nArr],dp[1][nArr]));
        }
    }
}