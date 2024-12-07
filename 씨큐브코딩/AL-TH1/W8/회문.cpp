#include <string>
#include <iostream>

using namespace std;

// ȸ������ Ȯ���ϴ� �Լ�
bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // ȸ���� �ƴ�
        }
        left++;
        right--;
    }
    return true; // ȸ����
}

int main() {
    int num;
    cin >> num; // ���ڿ��� ���� �Է�
    int palindromeCount = 0; // ȸ���� ����

    for (int i = 0; i < num; i++) {
        string word;
        cin >> word; // ���ڿ� �Է�

        if (isPalindrome(word)) {
            palindromeCount++; // ȸ���̸� ī��Ʈ ����
        }
    }

    cout << palindromeCount << endl; // ȸ���� �� ���� ���
    return 0;
}
