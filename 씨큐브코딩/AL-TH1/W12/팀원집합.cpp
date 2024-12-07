#include <cstdio>      // C 표준 입출력 헤더
#include <algorithm>   // std::sort 함수 사용을 위한 헤더
using namespace std;  // 표준 네임스페이스 사용

int main() 
{
    // pair 배열 선언 (각 요소는 두 개의 정수를 저장, 초기화는 {}로 비어있음)
    pair<int, int> p[100001] = {};
    int n;  // 입력받을 데이터의 개수
    
    // 사용자로부터 입력받은 데이터의 개수 n을 입력받음
    scanf("%d", &n);

    // n개의 (x, y) 값을 입력받아 p 배열에 저장
    for (int i = 0; i < n; i++)
        scanf("%d %d", &p[i].first, &p[i].second);  // p[i].first에 x값, p[i].second에 y값 저장

    // pair 배열 p를 첫 번째 값 (x값) 기준으로 오름차순 정렬
    sort(p, p + n);  // 첫 번째 값 (p[i].first) 기준으로 정렬

    // 정렬된 배열을 순차적으로 출력
    for (int i = 0; i < n; i++)
    {
        // 정렬된 순서대로 두 번째 값 (y값) 출력
        printf("%d ", p[i].second);

        // 만약 현재 값과 다음 값의 첫 번째 값이 다르면 줄바꿈을 추가
        if (p[i].first != p[i + 1].first)
            printf("\n");
    }
    
    return 0;  // 프로그램 종료
}

