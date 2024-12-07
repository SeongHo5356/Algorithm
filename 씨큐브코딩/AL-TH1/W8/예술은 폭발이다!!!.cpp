#include <iostream>
#include <string>

using namespace std;

int main() {
    string original;  // 원본 문자열
    string bomb;      // 폭탄 문자열
    cin >> original;  // 첫 번째 줄 입력
    cin >> bomb;      // 두 번째 줄 입력

    string result;    // 최종 결과 문자열
    int bombLength = bomb.length(); // 폭탄 문자열의 길이
    int originalLength = original.length(); // 원본 문자열의 길이

    for (int i = 0; i < originalLength; i++) {
        result += original[i]; // 원본 문자열의 문자 하나씩 추가

        // 현재 result 문자열의 길이가 폭탄 문자열의 길이보다 크거나 같을 때
        if (result.length() >= bombLength) {
            // 최근 추가된 부분이 폭탄 문자열과 일치하는지 확인
            if (result.substr(result.length() - bombLength) == bomb) {
                // 폭탄 문자열이 발견되면 result를 폭탄 문자열을 제외한 부분으로 갱신
                result = result.substr(0, result.length() - bombLength);
            }
        }
    }

    // 최종 결과 출력
    if (result.empty()) {
        cout << "Art!" << endl; // 아무것도 남지 않으면 "Art!" 출력
    } else {
        cout << result << endl; // 최종 문자열 출력
    }

    return 0;
}

