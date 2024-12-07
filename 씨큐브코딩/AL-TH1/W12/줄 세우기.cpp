#include <cstdio>      // C 표준 입출력 헤더
#include <algorithm>   // std::sort 함수 사용을 위한 헤더
using namespace std;  // 표준 네임스페이스 사용

int main() 
{
    double h[100001];       // 크기가 100001인 double 배열 h 선언 (입력 받은 값을 저장)
    double temp_h[100001];  // 원본 배열을 보관할 또 다른 배열 temp_h 선언
    int n;                  // 학생 수를 나타낼 정수 변수 n
    
    // 사용자로부터 학생 수 입력
    scanf("%d", &n);

    // 학생의 키를 입력받아 h 배열에 저장하고, temp_h 배열에도 복사
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &h[i]);         // 학생의 키를 입력받아 h 배열에 저장
        temp_h[i] = h[i];            // 원본 배열을 그대로 temp_h에 복사
    }
    
    // h 배열을 오름차순으로 정렬
    sort(h, h + n);

    int count = 0;  // 배열에서 위치가 변경된 원소의 개수를 세기 위한 변수 count 초기화
    
    // 배열을 비교하여 위치가 변경된 원소가 몇 개 있는지 확인
    for (int i = 0; i < n; i++)
    {
        if (h[i] != temp_h[i])  // 원본 배열과 정렬된 배열의 값이 다르면 위치가 변경된 것
            count++;             // 위치가 변경된 원소의 개수를 카운트
    }
    
    // 위치가 변경된 원소의 개수를 출력
    printf("%d", count);

    return 0;  // 프로그램 종료
}

