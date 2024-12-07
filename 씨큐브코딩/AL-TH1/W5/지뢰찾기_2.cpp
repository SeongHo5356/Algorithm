#include <cstdio>

void changeMat(int mat[102][102], int row, int col) {
    // �ֺ� ���� ���� ����
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {
            if (dr == 0 && dc == 0) continue; // �ڱ� �ڽ��� �ǳʶٱ�
            int newRow = row + dr;
            int newCol = col + dc;
            // ��ȿ�� ��ġ���� Ȯ��
            if (newRow >= 1 && newRow <= 100 && newCol >= 1 && newCol <= 100) {
                if (mat[newRow][newCol] != -1) {
                    mat[newRow][newCol] += 1; // �ֺ� ���� ���� ����
                }
            }
        }
    }
}

int main() {
    int row, col, num;
    int mat[102][102] = {0}; 
    
    scanf("%d %d", &col, &row);
    scanf("%d", &num); // ������ ���� �Է�

    for (int i = 0; i < num; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        mat[y][x] = -1; // ���� ��ġ�� -1 ����
        changeMat(mat, y, x); // �ֺ� ���� ���� ������Ʈ
    }
    
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

