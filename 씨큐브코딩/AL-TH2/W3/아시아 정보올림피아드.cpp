#include <cstdio>
#include <algorithm>

using namespace std;

// 학생 정보를 저장하는 구조체
struct Student
{
    int country; // 소속 국가
    int num;     // 학생 번호
    int score;   // 점수
};

// 점수를 기준으로 내림차순 정렬
bool cmp(const Student left, const Student right)
{
    return left.score > right.score;
}

int main()
{
    int N; // 학생 수
    scanf("%d", &N);

    // 학생 정보를 저장할 배열
    Student data[101];
    for (int i = 0; i < N; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c); // 국가, 번호, 점수 입력
        data[i].country = a;
        data[i].num = b;
        data[i].score = c;
    }

    // 성적 순으로 정렬
    sort(data, data + N, cmp);

    // 국가별 메달 수를 저장하는 배열
    int country_count[101] = {0};
    int count = 0;

    // 메달 수여
    for (int i = 0; i < N; i++)
    {
        if (country_count[data[i].country] >= 2) // 한 국가에서 최대 2명까지 허용
            continue;

        country_count[data[i].country]++;
        printf("%d %d\n", data[i].country, data[i].num); // 국가와 학생 번호 출력
        count++;

        if (count >= 3) // 3명에게만 메달 수여
            break;
    }

    return 0;
}

