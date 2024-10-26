#include <cstdio>

int main(){
	int N;
	char str[1001];
	scanf("%s", str);
	
	for(int i =0;str[i];i++){
		if(str[i]>'a' && str[i]<'z'){
			printf("%c", str[i]-32+3);
		} 
		else{
			printf("%c", str[i]+3);
		}
	}
	
	
	return 0;
}
