#include <cstdio>
using namespace std;

struct Queue {
    int data[10000];
    int begin, end;
    
    // ������: begin�� end�� 0���� �ʱ�ȭ
    Queue() {
        begin = 0;
        end = 0;
    }

    // push: ť�� ���� �߰�
    void push(int num) {
        data[end] = num;
        end += 1;
    }

    // empty: ť�� ������� Ȯ��
    bool empty() {
        return begin == end;
    }

    // size: ť�� ũ�� ��ȯ
    int size() {
        return end - begin;
    }

    // front: ť�� �� �� ��ȯ, ��������� -1
    int front() {
        if (empty()) return -1;
        return data[begin];
    }

    // back: ť�� �� �� ��ȯ, ��������� -1
    int back() {
        if (empty()) return -1;
        return data[end - 1];
    }

    // pop: ť���� �� ���� ������ ��ȯ, ��������� -1
    int pop() {
        if (empty()) {
            return -1;
        }
        int result = data[begin];
        begin += 1;
        return result;
    }
};

int main() {
    Queue q;
    
    // ť�� �� �߰�
    q.push(10);
    q.push(20);
    q.push(30);
    
    // ť ���� ���
    printf("Front: %d\n", q.front());  // Front: 10
    printf("Back: %d\n", q.back());    // Back: 30
    printf("Size: %d\n", q.size());    // Size: 3

    // ť���� ���� pop
    printf("Pop: %d\n", q.pop());     // Pop: 10
    printf("Pop: %d\n", q.pop());     // Pop: 20
    printf("Pop: %d\n", q.pop());     // Pop: 30

    // ť�� ����� ��
    printf("Empty: %d\n", q.empty()); // Empty: 1
    printf("Pop: %d\n", q.pop());     // Pop: -1 (ť�� �������)

    return 0;
}

