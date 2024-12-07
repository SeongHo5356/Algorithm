#include <iostream>
#include <utility> // pair ����� ���� ��� ����
// #include <cstring>

using namespace std;

int main() {
    // ������ ���ڿ��� �����ϴ� pair ����
    pair<int, string> s = make_pair(1, "Hello");

    // ����� ����
    cout << "First: " << s.first << endl;   // 1
    cout << "Second: " << s.second << endl; // Hello

    // �� ����
    s.first = 42;
    s.second = "World";
    cout << "Updated First: " << s.first << endl; // 42
    cout << "Updated Second: " << s.second << endl; // World
    
    pair<int, int> p = make_pair(2,3);
	pair<int, int> q = make_pair(3,4);
					//= {2,3}
	printf("%d\n", p < q); // 1
	printf("%d\n", p > q); // 0
	printf("%d\n", p == q); // 0

    return 0;
}
