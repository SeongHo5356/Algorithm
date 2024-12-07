#include <cstdio>
using namespace std;

struct Stack {
    int data[10000];
    int size;
    
    // ������: Stack�� size�� 0���� �ʱ�ȭ
    Stack() {
        size = 0;
    }
    
    // push: ���ÿ� �����͸� �߰�
    void push(int num) {
        data[size] = num;
        size += 1;
    }
    
    // empty: ������ ������� Ȯ��
    bool empty() {
        return size == 0;
    }

    // pop: ���ÿ��� ���� ������, ��� ������ -1�� ����
    int pop() {
        if (empty()) {
            return -1;
        } else {
            size -= 1;
            return data[size];
        }
    }

    // top: ������ ���� �� ���� ��ȯ, ��� ������ -1�� ����
    int top() {
        if (empty()) {
            return -1;
        } else {
            return data[size - 1];
        }
    }
};

int main() {
    Stack s;
    
    s.push(10); // ���ÿ� 10�� ����
    s.push(20); // ���ÿ� 20�� ����
    s.push(30); // ���ÿ� 30�� ����
    
    printf("%d\n", s.top());  // ������ top �� ���: 30
    printf("%d\n", s.pop());  // ���ÿ��� pop: 30
    printf("%d\n", s.top());  // ������ top �� ���: 20
    printf("%d\n", s.pop());  // ���ÿ��� pop: 20
    printf("%d\n", s.pop());  // ���ÿ��� pop: 10
    printf("%d\n", s.pop());  // ������ ������Ƿ� -1 ���

    return 0;
}

