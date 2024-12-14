#include <stdio.h>

int main() {
    // 문자 배열 (끝에 NULL 문자 없음)
    char arr[5] = {'H', 'e', 'l', 'l', 'o'};
    
    // 문자열 (끝에 NULL 문자 자동 추가)
    char str[6] = "Hello";
    
    // 문자 배열을 출력하려면 NULL 문자로 끝나는지 확인해야 함
    printf("arr: ");
    for (int i = 0; i < 5; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");

    // 문자열 출력
    printf("str1: %s\n", arr);

    printf("str: %s\n", str);

    return 0;
}

