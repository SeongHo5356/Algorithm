#include <stdio.h>

int main()
{
    int H, M, S, T;
    int tT, tM;
	scanf("%d %d %d", &H, &M, &S);
    scanf("%d", &T);
    
    tT = T/3600;
    tM = (T - (tT*3600))/60;
    T = T - (tT*3600) - (tM*60);
    
    H -= tT;
    M -= tM;
    S -= T;
    
    if (S < 0){
    	M -= 1;
    	S += 60;
	}
	if (M < 0){
		H -= 1
		M += 60;
	}
	if (H < 0){
		S += 24;
	}
    printf("%d %d %d", H, M, S);
}
