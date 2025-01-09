import java.util.*;
import java.math.*;

public class Main{
    
    static int dp[] = new int[12];
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        
        for(int i=4;i<11;i++){
            dp[i] = dp[i-3]+dp[i-2]+dp[i-1];
        }        
        for(int i=0;i<n;i++){
            int t = sc.nextInt();
            System.out.println(dp[t]);
        }
    }
}