#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    s.push('a');  // ���� 'a'�� ���ÿ� ����
    s.push('b');  // ���� 'b'�� ���ÿ� ����
    s.push('c');  // ���� 'c'�� ���ÿ� ����
	
	printf("%d ",s.top());
    cout << "Top element: " << s.top() << endl;  // c ���, ������ ���� ���� �ִ� ���� 'c'

    return 0;
}

