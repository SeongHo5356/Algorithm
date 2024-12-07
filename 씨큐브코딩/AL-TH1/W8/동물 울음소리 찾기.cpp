#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string targetSound;  // ã���� �ϴ� ������ �����Ҹ�
    cin >> targetSound;  // ù ��° �� �Է�

    int N;                    // ������ �����Ҹ��� ���� ��
    cin >> N;                // �� ��° �� �Է�

    vector<string> recordedSounds(N); // ������ �����Ҹ� ����

    // N���� �����Ҹ� �Է�
    for (int i = 0; i < N; ++i) {
        cin >> recordedSounds[i];
    }

    // �����Ҹ� ��
    for (int i =0;i<N;i++) {
        if (recordedSounds[i] == targetSound) {
            cout << "Yes" << endl; // ã���� �ϴ� �����Ҹ��� ������
            return 0;
        }
    }

    cout << "No" << endl; // ã���� �ϴ� �����Ҹ��� �������� ����
    return 0;
}

