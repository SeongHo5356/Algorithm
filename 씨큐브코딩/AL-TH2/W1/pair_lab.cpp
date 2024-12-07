#include <cstdio>
#include <utility>
using namespace std;

int main() {
    pair<int, char> p(15, 'H');  // pair를 생성하고, 첫 번째 값은 15, 두 번째 값은 'H'로 초기화

    printf("%d %c\n", p.first, p.second);  // p의 첫 번째 값과 두 번째 값을 출력

    p.first = 40;  // 첫 번째 값을 40으로 변경
    p.second = '*';  // 두 번째 값을 '*'로 변경
    printf("%d %c\n", p.first, p.second);  // 변경된 값을 출력

    p = {5, '+'};  // 새로운 값을 {5, '+'}로 할당
    printf("%d %c\n", p.first, p.second);  // 새로운 값을 출력

    return 0;
}
 
