#include <cstdio>
using namespace std;

struct Stack {
    int data[10000];
    int size;
    
    // 생성자: Stack의 size를 0으로 초기화
    Stack() {
        size = 0;
    }
    
    // push: 스택에 데이터를 추가
    void push(int num) {
        data[size] = num;
        size += 1;
    }
    
    // empty: 스택이 비었는지 확인
    bool empty() {
        return size == 0;
    }

    // pop: 스택에서 값을 꺼내고, 비어 있으면 -1을 리턴
    int pop() {
        if (empty()) {
            return -1;
        } else {
            size -= 1;
            return data[size];
        }
    }

    // top: 스택의 가장 위 값을 반환, 비어 있으면 -1을 리턴
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
    
    s.push(10); // 스택에 10을 넣음
    s.push(20); // 스택에 20을 넣음
    s.push(30); // 스택에 30을 넣음
    
    printf("%d\n", s.top());  // 스택의 top 값 출력: 30
    printf("%d\n", s.pop());  // 스택에서 pop: 30
    printf("%d\n", s.top());  // 스택의 top 값 출력: 20
    printf("%d\n", s.pop());  // 스택에서 pop: 20
    printf("%d\n", s.pop());  // 스택에서 pop: 10
    printf("%d\n", s.pop());  // 스택이 비었으므로 -1 출력

    return 0;
}

