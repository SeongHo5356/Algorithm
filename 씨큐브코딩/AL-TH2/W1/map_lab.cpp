#include <cstdio>
#include <map>
using namespace std;

int main() {
    map<int, int> m;

    m.insert(make_pair(4, 5));  // (4, 5)��� Ű-�� ���� ����
    m[5] = 6;  // Ű 5�� �� 6�� �Ҵ�
	
	printf("%d\n", m.find(4));  // Ű 4�� ���� ���� ���
    printf("%d\n", m.find(4)->second);  // Ű 4�� ���� ���� ���// ������ map.end() ��ȯ 
    printf("%d\n", m[5]);	// ������ 0�� value�� ���� 
	return 0;
}

