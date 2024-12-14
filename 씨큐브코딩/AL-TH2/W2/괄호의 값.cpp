#include <cstdio>
#include <cstring>

char str[33], stack[33];
int num[33], top;

void push(char c)
{
    stack[top++] = c;  // top�� �������Ѽ� ���ÿ� �߰�
}

void pop(int val)
{
    if (num[top]) num[top - 1] += val * num[top], num[top] = 0;
    else num[top - 1] += val;
    top--;  // top�� ���ҽ��Ѽ� ���ÿ��� ����
}

int main()
{
    scanf("%s", str);  // ��ȣ�� �Է� �ޱ�
    int i, len = strlen(str), flag = 1;
    
    // top�� 0���� �ʱ�ȭ
    top = 0;

    for (i = 0; i < len; ++i) {
        if (str[i] == '(' || str[i] == '[') {
            push(str[i]);  // ���� ��ȣ�� ���ÿ� �߰�
        }
        else {
            char ch = str[i];
            // ������ ��� �ְų�, ¦�� ���� ������ �߸��� ��ȣ��
            if (top == 0 || 
    		(stack[top - 1] == '(' && ch != ')') || 
    		(stack[top - 1] == '[' && ch != ']')) {
                flag = 0;  // �߸��� ��ȣ���� ���
                break;
            }
            else {
                // ���� ��ȣ ó��
                if (ch == ')') pop(2);  // ()�� ��� �� 2
                else pop(3);  // []�� ��� �� 3
            }
        }
    }
    
    if (top) flag = 0;  // ���ÿ� ���� ���� ������ �߸��� ��ȣ��

    // �ùٸ� ��ȣ���̶�� ���� �� ���, �ƴϸ� 0 ���
    printf("%d\n", flag ? num[0] : 0);
    return 0;
}

