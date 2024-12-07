#include <cstdio>      // C ǥ�� ����� ���
#include <algorithm>   // std::sort �Լ� ����� ���� ���
using namespace std;  // ǥ�� ���ӽ����̽� ���

int main() 
{
    // pair �迭 ���� (�� ��Ҵ� �� ���� ������ ����, �ʱ�ȭ�� {}�� �������)
    pair<int, int> p[100001] = {};
    int n;  // �Է¹��� �������� ����
    
    // ����ڷκ��� �Է¹��� �������� ���� n�� �Է¹���
    scanf("%d", &n);

    // n���� (x, y) ���� �Է¹޾� p �迭�� ����
    for (int i = 0; i < n; i++)
        scanf("%d %d", &p[i].first, &p[i].second);  // p[i].first�� x��, p[i].second�� y�� ����

    // pair �迭 p�� ù ��° �� (x��) �������� �������� ����
    sort(p, p + n);  // ù ��° �� (p[i].first) �������� ����

    // ���ĵ� �迭�� ���������� ���
    for (int i = 0; i < n; i++)
    {
        // ���ĵ� ������� �� ��° �� (y��) ���
        printf("%d ", p[i].second);

        // ���� ���� ���� ���� ���� ù ��° ���� �ٸ��� �ٹٲ��� �߰�
        if (p[i].first != p[i + 1].first)
            printf("\n");
    }
    
    return 0;  // ���α׷� ����
}

