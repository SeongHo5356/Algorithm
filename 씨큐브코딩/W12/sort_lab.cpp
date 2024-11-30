#include <iostream>
#include <algorithm>  // std::sort
#include <functional> // std::greater (이 부분은 선택사항입니다, compare 함수만으로 충분합니다.)

// 내림차순 비교 함수
bool compare(int a, int b) {
    return a > b;  // a가 b보다 클 때 true를 반환, 내림차순
}

int main() {
    // 정수 배열 선언
    int arr[] = {10, 30, 20, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  // 배열 크기 계산

    // 내림차순으로 정렬 (compare 함수 사용)
    std::sort(arr, arr + 4, compare);

    // 정렬된 결과 출력
    std::cout << "내림차순으로 정렬된 배열: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

