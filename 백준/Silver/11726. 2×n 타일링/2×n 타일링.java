import java.util.Scanner;

public class Main{
    
    
    public static void main(String args[]){
        
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();        
        
        int dp[] = new int[1001];
        
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i =3; i < num+1; i++){
            dp[i] = (dp[i-2] + dp[i-1]) % 10007;
        }
        
        System.out.println(dp[num]);
    }
}