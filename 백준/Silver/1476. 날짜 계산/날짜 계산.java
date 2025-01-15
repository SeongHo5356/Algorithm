import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int E, S, M;
        E = sc.nextInt();
        S = sc.nextInt();
        M = sc.nextInt();

        int nE=1, nS=1, nM=1;

       
        int cnt = 1;
        while(true){
            if (nE == E && nS == S && nM == M){
                break;
            }
            nE++;
            nE %= 15;
            if (nE == 0){ nE = 15;}
            nS++;
            nS %= 28;
            if (nS == 0){ nS = 28;}
            nM++;
            nM %= 19;
            if (nM == 0){ nM = 19;}
            cnt++;
           
        }
        System.out.println(cnt);
    }
}
