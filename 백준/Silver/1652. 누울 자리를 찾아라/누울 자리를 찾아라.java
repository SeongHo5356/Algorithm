import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 첫 번째 입력: 숫자
        int n = sc.nextInt();
        sc.nextLine(); // 개행 문자 처리

        // 2차원 배열로 입력 받기
        char[][] grid = new char[n][n];
        for (int i = 0; i < n; i++) {
            String line = sc.nextLine();
            for (int j = 0; j < n; j++) {
                grid[i][j] = line.charAt(j);
            }
        }

        // 요소 접근 및 출력 예시
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                System.out.print(grid[i][j] + " "); // 요소 출력
//            }
//            System.out.println();
//        }

        int row_count = 0;
        int col_count = 0;

        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if (grid[i][j] == '.'){
                    count++;
                }
                else{
                    if(count>1){
                        row_count++;
                    }
                    count = 0;
                }
            }
            if(count > 1){
                row_count++;
            }
        }

        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if (grid[j][i] == '.'){
                    count++;
                }
                else{
                    if(count>1){
                        col_count++;
                    }
                    count = 0;
                }
            }
            if(count > 1){
                col_count++;
            }
        }
        System.out.println(row_count + " " + col_count);
    }
}
