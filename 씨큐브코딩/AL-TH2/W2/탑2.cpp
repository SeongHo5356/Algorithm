#include <cstdio>
#include <stack>

using namespace std;

int main(){
    int num;
    scanf("%d", &num);  // ž�� ���� �Է�
    
    int arr[500001];  // ž�� ���� �迭
    int ans[500001];  // �� ž���� ������ ��ȣ�� ������ ž �迭
    
    // ž���� ���� �Է� �ޱ�
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    
    // ���� ����: ������ ž�� �ε����� ����
    stack<int> s;

    // ��� �迭�� 0���� �ʱ�ȭ
    for(int i = 0; i < num; i++) {
        // ���� ž���� ���̰� �� ū ž�� ã�� ������ ���ÿ��� pop
        while (!s.empty() && arr[s.top()] < arr[i]) {
            s.pop();
        }
        
        // ������ ���� �ʾҴٸ�, ���� �ֱٿ� ���� ž�� ���� ž
        if (!s.empty()) {
            ans[i] = s.top() + 1;  // ���ÿ��� �ε����� ����Ǿ� �����Ƿ� 1�� �����ֱ�
        } else {
            ans[i] = 0;  // �����ϴ� ž�� ���ٸ� 0
        }

        // ���� ž�� �ε����� ���ÿ� �ִ´�
        s.push(i);
    }

    // ��� ���
    for(int i = 0; i < num; i++){
        printf("%d ", ans[i]);
    }
    
    return 0;
}

