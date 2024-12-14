#include <cstdio>
#include <stack>
using namespace std;

int main() {
    char a[100001];
    scanf("%s", a);  // ��ȣ ���ڿ��� �Է¹޽��ϴ�.
    
    stack<int> s;  // ������ ����Ͽ� ���� ��ȣ�� �����մϴ�.
    int ans = 0;  // �߸� �踷��� ������ �� ����
    
    for (int i = 0; a[i]; i++) {  // ��ȣ ���ڿ��� �ϳ��� ó��
        if (a[i] == '(') {
            s.push(i);  // '('�� ���ÿ� Ǫ��
        } else {
        	printf("%d ",s.top());
            if (s.top() + 1 == i) {
                s.pop();  // �������� ���, ���ÿ��� �ϳ��� pop
                ans += s.size();  // ���� �踷��� ����ŭ ������ �߸�
            } else {
                s.pop();  // �踷��� ������ ���, ���ÿ��� �ϳ��� pop
                ans += 1;  // �ϳ��� ������ �߰���
            }
        }
    }

    printf("%d\n", ans);  // ��� ���
    return 0;
}

