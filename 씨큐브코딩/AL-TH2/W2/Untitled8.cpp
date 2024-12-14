#include <stdio.h>

int main(){
	char ch;
	scanf("%c", &ch);
	
	printf("입력:%c, 출력:%c\n",ch,ch+32);	
	printf("입력:%c, 출력:%c",ch+1,ch+1+32);
	return 0;
}
