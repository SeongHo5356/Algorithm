#include <iostream>

using namespace std;

int a[1000000];

void swap(int &x, int &y){
	int z = x;
	x = y;
	y = z;
}

int choosePivot(int low, int high){
	return low+(high-low)/2;
}

int partition(int low, int high){
	int pivotIndex = choosePivot(low, high);
	int pivotValue = a[pivotIndex];
	swap(a[pivotIndex], a[high]);
	int storeIndex = low;
	for (int i =0;i<high;i++){
		if (a[i]<pivotValue){
			swap(a[i], a[storeIndex]);
			storeIndex+=1;
		}
	}
	swap(a[storeIndex], a[high]);
	return storeIndex;
}

void quickSort(int low, int high){
	if (low < high){
		int pivot = partition(low,high);
		quickSort(low, pivot-1);
		quickSort(pivot+1, high);
	}
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    quickSort(0, n-1);
    for (int i=0; i<n; i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}
