#include<algorithm>
#include<iostream>

using namespace std;

int number = 8;
int sorted[8];

void merge(int a[], int start, int middle , int end){
	int i = start;
	int j = middle +1;
	int k = start;
	while(i<=middle && j<= end){
		if(a[i] <= a[j]){
			sorted[k] = a[i];
			i++;
		}
		else{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	if(i>middle){
		for(int t=j; t<=end; t++){
			sorted[k] = a[t];
			k++;
		}
	}
	else{
		for(int t = i; t<=middle; t++){
			sorted[k] = a[t];
			k++;
		}
	}
	
	for(int i =start; i<= end; i++){
		a[i] = sorted[i];
	}
}

void mergeSort(int a[], int start, int end){
	if(start < end){
		int middle = (start + end)/2;
		mergeSort(a, start, middle);
		mergeSort(a, middle+1, end);
		merge(a, start, middle, end);
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