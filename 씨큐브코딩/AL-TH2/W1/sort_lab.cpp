#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const int a, const int b) {
    return a > b;
}

int main() {

    int arr1[10] = { 1, 3, 8, 2, 7, 10, 20, 4, 6, 5 };
    vector<int> arr2(arr1, arr1 + sizeof(arr1) / sizeof(int));
    int n = 10;

    sort(arr1, arr1 + n);
    for (int i = 0; i < 10; i++)
        printf("%d\n", arr1[i]);

    sort(arr2.begin(), arr2.end());
    for (int i = 0; i < 10; i++)
        printf("%d\n", arr2[i]);

    sort(arr1, arr1 + n, cmp);
    for (int i = 0; i < 10; i++)
        printf("%d\n", arr1[i]);

    return 0;
}
