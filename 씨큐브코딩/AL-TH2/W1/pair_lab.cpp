#include <cstdio>
#include <utility>
using namespace std;

int main() {
    pair<int, char> p(15, 'H');  // pair�� �����ϰ�, ù ��° ���� 15, �� ��° ���� 'H'�� �ʱ�ȭ

    printf("%d %c\n", p.first, p.second);  // p�� ù ��° ���� �� ��° ���� ���

    p.first = 40;  // ù ��° ���� 40���� ����
    p.second = '*';  // �� ��° ���� '*'�� ����
    printf("%d %c\n", p.first, p.second);  // ����� ���� ���

    p = {5, '+'};  // ���ο� ���� {5, '+'}�� �Ҵ�
    printf("%d %c\n", p.first, p.second);  // ���ο� ���� ���

    return 0;
}
 
