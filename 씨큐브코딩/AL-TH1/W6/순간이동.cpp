#include <cstdio>

int arr[10001];

int my_locations(int start, int time){
	if (time == 0) return start;
//	printf("%d %d\n", start, time);
	return my_locations(arr[start], time-1);	
}

int main(){

	int num, start, time;
	scanf("%d %d %d", &num, &start, &time);
	for(int i =0; i<num;i++){
		scanf("%d", &arr[i+1]);
	}
//	for(int i =0; i<num;i++){
//		printf("%d \n", arr[i+1]);
//	}
	printf("%d", my_locations(start, time));
	
	return 0;
} 
