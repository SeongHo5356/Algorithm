#include <iostream>

using namespace std;

void counting_sort(int* arr, int size)
{
	int* counting, *sorted;
	int maxNum = 0;
	for (int i = 0; i < size; i++) if (arr[i] > maxNum) maxNum = arr[i];
	counting = new int[maxNum + 1]{0};
	sorted = new int[size] {0};

	for (int i = 0; i < size; i++) counting[arr[i]]++;
	for (int i = 1; i <= maxNum; i++) counting[i] += counting[i - 1];
	for (int i = 0; i < size; i++)
	{
		sorted[counting[arr[i]] - 1] = arr[i];
		counting[arr[i]]--;
	}
	for (int i = 0; i < size; i++) arr[i] = sorted[i];

	delete[] counting;
	delete[] sorted;
}

int main(void)
{
	int arr[10] = { 5, 9, 8, 3, 5, 4, 6, 12, 2, 4 };

	for (int i = 0; i < 10; i++) cout << arr[i] << " ";
	cout << '\n';

	counting_sort(arr, 10);

	for (int i = 0; i < 10; i++) cout << arr[i] << " ";
	cout << '\n';

	return 0;
}