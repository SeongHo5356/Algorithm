#include <string>
#include <iostream>

using namespace std;

// 회문인지 확인하는 함수
bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // 회문이 아님
        }
        left++;
        right--;
    }
    return true; // 회문임
}

int main() {
    int num;
    cin >> num; // 문자열의 개수 입력
    int palindromeCount = 0; // 회문의 개수

    for (int i = 0; i < num; i++) {
        string word;
        cin >> word; // 문자열 입력

        if (isPalindrome(word)) {
            palindromeCount++; // 회문이면 카운트 증가
        }
    }

    cout << palindromeCount << endl; // 회문의 총 개수 출력
    return 0;
}
