#include <iostream>
using namespace std;
const int MAX = 10000;

int main() {
	int min = 1, num, count;
	int A[MAX];
	A[0] = 1, A[1] = 1;
	for (int i = 2; i < MAX; i++) {
		int value = 1;
		while (true) {
			A[i] = value;
			int k = 1;
			while (true) {
				if (i - 2 * k < 0) break;
				if (A[i] - A[i - k] == A[i - k] - A[i - 2 * k])
					break;
				k++;
			}
			if (i - 2 * k < 0)
				break;
			else
				value++;
		}
	}

	cin >> num;
	cout << A[num] << '\n';
}
