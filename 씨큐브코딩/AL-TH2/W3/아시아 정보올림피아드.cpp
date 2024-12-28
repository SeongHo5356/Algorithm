#include <cstdio>
#include <algorithm>

using namespace std;

// �л� ������ �����ϴ� ����ü
struct Student
{
    int country; // �Ҽ� ����
    int num;     // �л� ��ȣ
    int score;   // ����
};

// ������ �������� �������� ����
bool cmp(const Student left, const Student right)
{
    return left.score > right.score;
}

int main()
{
    int N; // �л� ��
    scanf("%d", &N);

    // �л� ������ ������ �迭
    Student data[101];
    for (int i = 0; i < N; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c); // ����, ��ȣ, ���� �Է�
        data[i].country = a;
        data[i].num = b;
        data[i].score = c;
    }

    // ���� ������ ����
    sort(data, data + N, cmp);

    // ������ �޴� ���� �����ϴ� �迭
    int country_count[101] = {0};
    int count = 0;

    // �޴� ����
    for (int i = 0; i < N; i++)
    {
        if (country_count[data[i].country] >= 2) // �� �������� �ִ� 2����� ���
            continue;

        country_count[data[i].country]++;
        printf("%d %d\n", data[i].country, data[i].num); // ������ �л� ��ȣ ���
        count++;

        if (count >= 3) // 3���Ը� �޴� ����
            break;
    }

    return 0;
}

