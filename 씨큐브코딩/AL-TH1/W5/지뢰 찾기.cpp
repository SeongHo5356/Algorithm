#include <cstdio>

void changeMat(int mat[102][102], int row, int col) {
    // �ֺ� ���� ���� ����
    if (mat[row-1][col] != -1) mat[row-1][col] += 1;       // ��
    if (mat[row-1][col+1] != -1) mat[row-1][col+1] += 1;   // �� ������
    if (mat[row-1][col-1] != -1) mat[row-1][col-1] += 1;   // �� ����
    if (mat[row][col-1] != -1) mat[row][col-1] += 1;       // ����
    if (mat[row][col+1] != -1) mat[row][col+1] += 1;       // ������
    if (mat[row+1][col-1] != -1) mat[row+1][col-1] += 1;   // �Ʒ� ����
    if (mat[row+1][col] != -1) mat[row+1][col] += 1;       // �Ʒ�
    if (mat[row+1][col+1] != -1) mat[row+1][col+1] += 1;   // �Ʒ� ������
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

