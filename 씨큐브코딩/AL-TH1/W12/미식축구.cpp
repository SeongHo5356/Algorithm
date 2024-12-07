#include <cstdio>      // C 표준 입출력 헤더
#include <algorithm>   // std::sort 함수 사용을 위한 헤더
using namespace std;  // 표준 네임스페이스 사용

// 주어진 pair에 대해 계산을 수행하는 함수
int cal_e(pair<int, int> p)
{
    return p.first * p.second * p.second;  // p.first * p.second^2 값을 계산하여 반환
}

// 두 pair를 비교하는 함수 (내림차순 정렬 기준)
bool cmp(pair<int, int> left, pair<int, int> right) 
{
    return cal_e(left) > cal_e(right);  // cal_e 함수 결과에 따라 내림차순으로 정렬
}

int main() 
{
    pair<int, int> p[100001];  // 최대 100,001개의 pair를 저장할 배열 p 선언
    int n;  // pair의 개수 n
    
    // 사용자로부터 pair의 개수 n을 입력받음
    scanf("%d", &n);

    // n개의 pair를 입력받아 p 배열에 저장
    for (int i = 0; i < n; i++)
        scanf("%d %d", &p[i].first, &p[i].second);  // p[i].first, p[i].second에 각각 입력받은 값 저장

    // p 배열을 cmp 함수 기준으로 정렬 (cal_e 함수 결과가 큰 값이 먼저 오도록 내림차순 정렬)
    sort(p, p + n, cmp);

    // 정렬된 배열에서 첫 번째부터 세 번째까지의 pair를 출력
    for (int i = 0; i < 3; i++)
        printf("%d %d\n", p[i].first, p[i].second);  // 첫 번째와 두 번째 값 출력

    return 0;  // 프로그램 종료
}

