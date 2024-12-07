#include <cstdio>      // C 표준 입출력 헤더
#include <algorithm>   // std::sort 함수 사용을 위한 헤더
using namespace std;  // 표준 네임스페이스 사용

// character 구조체 정의
struct character 
{
    int level;   // 캐릭터의 레벨
    int exp;     // 캐릭터의 경험치
    int power;   // 캐릭터의 힘
};

// 두 character를 비교하는 함수 (내림차순 정렬 기준)
bool cmp(character left, character right) 
{
    // 레벨이 높은 순으로 정렬
    if (left.level > right.level)
        return true;  // left가 더 높은 레벨이면 true 반환 (left가 앞에 오도록)
    else if (left.level == right.level)  // 레벨이 같다면
    {
        // 경험치가 높은 순으로 정렬
        if (left.exp > right.exp)
            return true;  // left의 경험치가 더 크면 true 반환
        else if (leright.exp)  // 경험치가 같다면
        {ft.exp == 
            // 힘이 높은 순으로 정렬
            return left.power > right.power;  // left의 힘이 더 크면 true 반환
        }
        else
            return false;  // 그 외의 경우는 false 반환
    }
    else
        return false;  // 레벨이 더 낮으면 false 반환 (right가 앞에 오도록)
}

int main() 
{
    character c[100001];  // 최대 100,001개의 character를 저장할 배열 c 선언
    int n;  // 캐릭터의 개수 n
    
    // 사용자로부터 캐릭터 개수 n을 입력받음
    scanf("%d", &n);

    // n개의 캐릭터 정보를 입력받아 배열 c에 저장
    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &c[i].level, &c[i].exp, &c[i].power);  // 각각 level, exp, power 값을 입력받음

    // c 배열을 cmp 함수 기준으로 정렬
    sort(c, c + n, cmp);  // cmp 함수에 따라 캐릭터 배열을 정렬

    // 정렬된 캐릭터 배열을 출력
    for (int i = 0; i < n; i++)
        printf("%d %d %d\n", c[i].level, c[i].exp, c[i].power);  // level, exp, power 순으로 출력

    return 0;  // 프로그램 종료
}

