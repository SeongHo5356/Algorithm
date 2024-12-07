#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string targetSound;  // 찾고자 하는 동물의 울음소리
    cin >> targetSound;  // 첫 번째 줄 입력

    int N;                    // 녹음된 울음소리의 종류 수
    cin >> N;                // 두 번째 줄 입력

    vector<string> recordedSounds(N); // 녹음된 울음소리 저장

    // N개의 울음소리 입력
    for (int i = 0; i < N; ++i) {
        cin >> recordedSounds[i];
    }

    // 울음소리 비교
    for (int i =0;i<N;i++) {
        if (recordedSounds[i] == targetSound) {
            cout << "Yes" << endl; // 찾고자 하는 울음소리가 녹음됨
            return 0;
        }
    }

    cout << "No" << endl; // 찾고자 하는 울음소리가 녹음되지 않음
    return 0;
}

