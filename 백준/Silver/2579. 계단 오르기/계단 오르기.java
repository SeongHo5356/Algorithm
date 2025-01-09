import java.util.Scanner;

public class Main{
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        
        int[] dp = new int[num+1];
        int[] arr = new int[num+1];
        
        for(int i=1;i<=num;i++){
            arr[i] = sc.nextInt();
        }
        
        dp[0] = arr[0];    // 시작점 0점
        dp[1] = arr[1];    // 1층은 1층 점수
        
        if(num>=2){
            dp[2] = arr[1] + arr[2];
        }
        
        for(int i =3;i<num+1;i++){
            dp[i]=Math.max(dp[i-2],dp[i-3]+arr[i-1])+arr[i];
        }
        System.out.println(dp[num]);
    }
}