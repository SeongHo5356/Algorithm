#include <cstdio>
#include <map>
using namespace std;

int main() {
    map<int, int> m;

    m.insert(make_pair(4, 5));  // (4, 5)라는 키-값 쌍을 삽입
    m[5] = 6;  // 키 5에 값 6을 할당
	
	printf("%d\n", m.find(4));  // 키 4에 대한 값을 출력
    printf("%d\n", m.find(4)->second);  // 키 4에 대한 값을 출력// 없으면 map.end() 반환 
    printf("%d\n", m[5]);	// 없으면 0을 value로 삽입 
	return 0;
}

