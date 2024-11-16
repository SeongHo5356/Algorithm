#include <iostream>
#include <utility> // pair 사용을 위한 헤더 파일
// #include <cstring>

using namespace std;

int main() {
    // 정수와 문자열을 저장하는 pair 생성
    pair<int, string> s = make_pair(1, "Hello");

    // 멤버에 접근
    cout << "First: " << s.first << endl;   // 1
    cout << "Second: " << s.second << endl; // Hello

    // 값 변경
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
