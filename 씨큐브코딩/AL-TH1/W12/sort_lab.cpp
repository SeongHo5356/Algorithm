#include <iostream>
#include <algorithm>  // std::sort
#include <functional> // std::greater (�� �κ��� ���û����Դϴ�, compare �Լ������� ����մϴ�.)

// �������� �� �Լ�
bool compare(int a, int b) {
    return a > b;  // a�� b���� Ŭ �� true�� ��ȯ, ��������
}

int main() {
    // ���� �迭 ����
    int arr[] = {10, 30, 20, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);  // �迭 ũ�� ���

    // ������������ ���� (compare �Լ� ���)
    std::sort(arr, arr + 4, compare);

    // ���ĵ� ��� ���
    std::cout << "������������ ���ĵ� �迭: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

