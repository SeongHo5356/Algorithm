#include <cstdio>      // C ǥ�� ����� ���
#include <algorithm>   // std::sort �Լ� ����� ���� ���
using namespace std;  // ǥ�� ���ӽ����̽� ���

// character ����ü ����
struct character 
{
    int level;   // ĳ������ ����
    int exp;     // ĳ������ ����ġ
    int power;   // ĳ������ ��
};

// �� character�� ���ϴ� �Լ� (�������� ���� ����)
bool cmp(character left, character right) 
{
    // ������ ���� ������ ����
    if (left.level > right.level)
        return true;  // left�� �� ���� �����̸� true ��ȯ (left�� �տ� ������)
    else if (left.level == right.level)  // ������ ���ٸ�
    {
        // ����ġ�� ���� ������ ����
        if (left.exp > right.exp)
            return true;  // left�� ����ġ�� �� ũ�� true ��ȯ
        else if (leright.exp)  // ����ġ�� ���ٸ�
        {ft.exp == 
            // ���� ���� ������ ����
            return left.power > right.power;  // left�� ���� �� ũ�� true ��ȯ
        }
        else
            return false;  // �� ���� ���� false ��ȯ
    }
    else
        return false;  // ������ �� ������ false ��ȯ (right�� �տ� ������)
}

int main() 
{
    character c[100001];  // �ִ� 100,001���� character�� ������ �迭 c ����
    int n;  // ĳ������ ���� n
    
    // ����ڷκ��� ĳ���� ���� n�� �Է¹���
    scanf("%d", &n);

    // n���� ĳ���� ������ �Է¹޾� �迭 c�� ����
    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &c[i].level, &c[i].exp, &c[i].power);  // ���� level, exp, power ���� �Է¹���

    // c �迭�� cmp �Լ� �������� ����
    sort(c, c + n, cmp);  // cmp �Լ��� ���� ĳ���� �迭�� ����

    // ���ĵ� ĳ���� �迭�� ���
    for (int i = 0; i < n; i++)
        printf("%d %d %d\n", c[i].level, c[i].exp, c[i].power);  // level, exp, power ������ ���

    return 0;  // ���α׷� ����
}

