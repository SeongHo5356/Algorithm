#include <stdio.h>

int main() {
    // ���� �迭 (���� NULL ���� ����)
    char arr[5] = {'H', 'e', 'l', 'l', 'o'};
    
    // ���ڿ� (���� NULL ���� �ڵ� �߰�)
    char str[6] = "Hello";
    
    // ���� �迭�� ����Ϸ��� NULL ���ڷ� �������� Ȯ���ؾ� ��
    printf("arr: ");
    for (int i = 0; i < 5; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    // ���ڿ� ���
    printf("str1: %s\n", arr);

    printf("str: %s\n", str);

    return 0;
}

