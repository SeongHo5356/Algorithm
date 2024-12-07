#include <cstdio>

void changeMat(int mat[102][102], int row, int col) {
    // 주변 지뢰 개수 증가
    if (mat[row-1][col] != -1) mat[row-1][col] += 1;       // 위
    if (mat[row-1][col+1] != -1) mat[row-1][col+1] += 1;   // 위 오른쪽
    if (mat[row-1][col-1] != -1) mat[row-1][col-1] += 1;   // 위 왼쪽
    if (mat[row][col-1] != -1) mat[row][col-1] += 1;       // 왼쪽
    if (mat[row][col+1] != -1) mat[row][col+1] += 1;       // 오른쪽
    if (mat[row+1][col-1] != -1) mat[row+1][col-1] += 1;   // 아래 왼쪽
    if (mat[row+1][col] != -1) mat[row+1][col] += 1;       // 아래
    if (mat[row+1][col+1] != -1) mat[row+1][col+1] += 1;   // 아래 오른쪽
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

