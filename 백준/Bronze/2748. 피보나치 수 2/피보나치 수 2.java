import java.util.*;

public class Main{
    static int n;
    static long check[] = new long[91]; // long형 배열
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
            
        n = sc.nextInt();
        check[0] = 0;
        check[1] = 1;
        
        for(int i=2;i<n+1;i++){
            check[i] = check[i-1] + check[i-2];
        }
        System.out.println(check[n]);
    }
}