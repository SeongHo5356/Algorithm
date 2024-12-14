#include <cstdio>
#include <cstring>

char str[33], stack[33];
int num[33], top;

void push(char c)
{
    stack[top++] = c;  // top을 증가시켜서 스택에 추가
}

void pop(int val)
{
    if (num[top]) num[top - 1] += val * num[top], num[top] = 0;
    else num[top - 1] += val;
    top--;  // top을 감소시켜서 스택에서 꺼냄
}

int main()
{
    scanf("%s", str);  // 괄호열 입력 받기
    int i, len = strlen(str), flag = 1;
    
    // top을 0으로 초기화
    top = 0;

    for (i = 0; i < len; ++i) {
        if (str[i] == '(' || str[i] == '[') {
            push(str[i]);  // 열린 괄호는 스택에 추가
        }
        else {
            char ch = str[i];
            // 스택이 비어 있거나, 짝이 맞지 않으면 잘못된 괄호열
            if (top == 0 || 
    		(stack[top - 1] == '(' && ch != ')') || 
    		(stack[top - 1] == '[' && ch != ']')) {
                flag = 0;  // 잘못된 괄호열인 경우
                break;
            }
            else {
                // 닫힌 괄호 처리
                if (ch == ')') pop(2);  // ()일 경우 값 2
                else pop(3);  // []일 경우 값 3
            }
        }
    }
    
    if (top) flag = 0;  // 스택에 값이 남아 있으면 잘못된 괄호열

    // 올바른 괄호열이라면 계산된 값 출력, 아니면 0 출력
    printf("%d\n", flag ? num[0] : 0);
    return 0;
}

