#include <cstdio>
using namespace std;

struct Queue {
    int data[10000];
    int begin, end;
    
    // 생성자: begin과 end를 0으로 초기화
    Queue() {
        begin = 0;
        end = 0;
    }

    // push: 큐에 값을 추가
    void push(int num) {
        data[end] = num;
        end += 1;
    }

    // empty: 큐가 비었는지 확인
    bool empty() {
        return begin == end;
    }

    // size: 큐의 크기 반환
    int size() {
        return end - begin;
    }

    // front: 큐의 앞 값 반환, 비어있으면 -1
    int front() {
        if (empty()) return -1;
        return data[begin];
    }

    // back: 큐의 뒤 값 반환, 비어있으면 -1
    int back() {
        if (empty()) return -1;
        return data[end - 1];
    }

    // pop: 큐에서 앞 값을 꺼내고 반환, 비어있으면 -1
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
    
    // 큐에 값 추가
    q.push(10);
    q.push(20);
    q.push(30);
    
    // 큐 상태 출력
    printf("Front: %d\n", q.front());  // Front: 10
    printf("Back: %d\n", q.back());    // Back: 30
    printf("Size: %d\n", q.size());    // Size: 3

    // 큐에서 값을 pop
    printf("Pop: %d\n", q.pop());     // Pop: 10
    printf("Pop: %d\n", q.pop());     // Pop: 20
    printf("Pop: %d\n", q.pop());     // Pop: 30

    // 큐가 비었을 때
    printf("Empty: %d\n", q.empty()); // Empty: 1
    printf("Pop: %d\n", q.pop());     // Pop: -1 (큐가 비어있음)

    return 0;
}

