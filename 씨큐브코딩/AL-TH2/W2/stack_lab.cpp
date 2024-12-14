#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    s.push('a');  // 문자 'a'를 스택에 넣음
    s.push('b');  // 문자 'b'를 스택에 넣음
    s.push('c');  // 문자 'c'를 스택에 넣음
	
	printf("%d ",s.top());
    cout << "Top element: " << s.top() << endl;  // c 출력, 스택의 가장 위에 있는 값은 'c'

    return 0;
}

