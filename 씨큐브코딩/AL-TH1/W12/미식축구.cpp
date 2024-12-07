#include <cstdio>      // C ǥ�� ����� ���
#include <algorithm>   // std::sort �Լ� ����� ���� ���
using namespace std;  // ǥ�� ���ӽ����̽� ���

// �־��� pair�� ���� ����� �����ϴ� �Լ�
int cal_e(pair<int, int> p)
{
    return p.first * p.second * p.second;  // p.first * p.second^2 ���� ����Ͽ� ��ȯ
}

// �� pair�� ���ϴ� �Լ� (�������� ���� ����)
bool cmp(pair<int, int> left, pair<int, int> right) 
{
    return cal_e(left) > cal_e(right);  // cal_e �Լ� ����� ���� ������������ ����
}

int main() 
{
    pair<int, int> p[100001];  // �ִ� 100,001���� pair�� ������ �迭 p ����
    int n;  // pair�� ���� n
    
    // ����ڷκ��� pair�� ���� n�� �Է¹���
    scanf("%d", &n);

    // n���� pair�� �Է¹޾� p �迭�� ����
    for (int i = 0; i < n; i++)
        scanf("%d %d", &p[i].first, &p[i].second);  // p[i].first, p[i].second�� ���� �Է¹��� �� ����

    // p �迭�� cmp �Լ� �������� ���� (cal_e �Լ� ����� ū ���� ���� ������ �������� ����)
    sort(p, p + n, cmp);

    // ���ĵ� �迭���� ù ��°���� �� ��°������ pair�� ���
    for (int i = 0; i < 3; i++)
        printf("%d %d\n", p[i].first, p[i].second);  // ù ��°�� �� ��° �� ���

    return 0;  // ���α׷� ����
}

