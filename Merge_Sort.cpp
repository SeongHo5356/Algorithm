#include<iostream>
#include<algorithm>

using namespace std;

int number = 8;
int sorted[8]; // 정렬 배열은 반드시 전역변수로 선언

void merge(int a[], int begin, int middle, int end){
	int i = begin;
	int j = middle+1;
	int k = begin;
	//작은 순서대로 배열에 삽입 =
	while(i<=middle && j <= end){
		if(a[i]<=a[j]){
			sorted[k]=a[i];
			i++;
		}
		else{
			sorted[k]=a[j];
			j++;
		}
		k++;
	}
	//남은 데이터도 삽입
	if( i > middle){
		for(int t=j; t<=end; t++){
			sorted[k] = a[t];
			k++;
		}
	}
	else{
		for(int t=i; t<=middle; t++){
			sorted[k] = a[t];
			k++;
		}
	}
	
	for(int t=begin; t<=end; t++){
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n){
	if(m<n){
		int middle = (m+n)/2;
		mergeSort(a, m, middle);
		mergeSort(a, middle+1,n);
		merge(a, m, middle, n);
	}
}

int main(void){
	int array[number] = {1,3,2,5,6,4,7,8};
	mergeSort(array,0,number-1);
	
	for(int i=0;i<number;i++){
		cout << array[i]<< ' '; 
	}
	
	return 0;
}