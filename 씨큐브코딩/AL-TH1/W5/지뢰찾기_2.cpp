#include <cstdio>

void changeMat(int mat[102][102], int row, int col) {
    // 주변 지뢰 개수 증가
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {
            if (dr == 0 && dc == 0) continue; // 자기 자신은 건너뛰기
            int newRow = row + dr;
            int newCol = col + dc;
            // 유효한 위치인지 확인
            if (newRow >= 1 && newRow <= 100 && newCol >= 1 && newCol <= 100) {
                if (mat[newRow][newCol] != -1) {
                    mat[newRow][newCol] += 1; // 주변 지뢰 개수 증가
                }
            }
        }
    }
}

int main() {
    int row, col, num;
    int mat[102][102] = {0}; 
    
    scanf("%d %d", &col, &row);
    scanf("%d", &num); // 지뢰의 개수 입력

    for (int i = 0; i < num; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        mat[y][x] = -1; // 지뢰 위치에 -1 설정
        changeMat(mat, y, x); // 주변 지뢰 개수 업데이트
    }
    
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

