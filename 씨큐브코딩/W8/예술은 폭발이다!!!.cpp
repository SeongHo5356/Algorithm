#include <iostream>
#include <string>

using namespace std;

int main() {
    string original;  // ���� ���ڿ�
    string bomb;      // ��ź ���ڿ�
    cin >> original;  // ù ��° �� �Է�
    cin >> bomb;      // �� ��° �� �Է�

    string result;    // ���� ��� ���ڿ�
    int bombLength = bomb.length(); // ��ź ���ڿ��� ����
    int originalLength = original.length(); // ���� ���ڿ��� ����

    for (int i = 0; i < originalLength; i++) {
        result += original[i]; // ���� ���ڿ��� ���� �ϳ��� �߰�

        // ���� result ���ڿ��� ���̰� ��ź ���ڿ��� ���̺��� ũ�ų� ���� ��
        if (result.length() >= bombLength) {
            // �ֱ� �߰��� �κ��� ��ź ���ڿ��� ��ġ�ϴ��� Ȯ��
            if (result.substr(result.length() - bombLength) == bomb) {
                // ��ź ���ڿ��� �߰ߵǸ� result�� ��ź ���ڿ��� ������ �κ����� ����
                result = result.substr(0, result.length() - bombLength);
            }
        }
    }

    // ���� ��� ���
    if (result.empty()) {
        cout << "Art!" << endl; // �ƹ��͵� ���� ������ "Art!" ���
    } else {
        cout << result << endl; // ���� ���ڿ� ���
    }

    return 0;
}

