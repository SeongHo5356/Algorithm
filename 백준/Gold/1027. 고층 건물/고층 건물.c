#include <stdio.h>
#include <float.h>


double slope(double, double, double, double);
int checkLeft(int*, int, int);
int checkRight(int*, int, int);

int main(){
    int number;
    int buildings[50];
    int maxCount = -1;

    scanf("%d", &number);

    for(int i = 0; i < number; i++){
        scanf("%d", &buildings[i]);
    }

    for(int i = 0; i< number; i++){
        
        int nowCount = 0;

        nowCount = checkLeft(buildings, i, number) + checkRight(buildings, i, number);
        if(maxCount < nowCount){
            maxCount = nowCount;
        }
    }

    printf("%d", maxCount);

    return 0;
}

double slope(double x1, double x2, double y1, double y2){
    return  ((y2 - y1) / (x2 - x1));
}

int checkLeft(int *buildingArray, int nowIndex, int NOFBuildings){
    double maxS = DBL_MAX;
    int count = 0;

    if(nowIndex == 0){
        return 0;
    }else{
        for(int i = nowIndex -1; i >= 0; i--){
            double nowS = slope(nowIndex, i, buildingArray[nowIndex], buildingArray[i]);
            if(nowS < maxS){
                maxS = nowS;
                count++;
            }
        }

        return count;
    }
}

int checkRight(int *buildingArray, int nowIndex, int NOFBuildings){
    double maxS = -DBL_MAX;
    int count = 0;

    if(nowIndex == NOFBuildings-1){
        return 0;
    }else{
        for(int i = nowIndex +1; i<NOFBuildings; i++){
            double nowS = slope(nowIndex, i, buildingArray[nowIndex], buildingArray[i]);
            if(nowS > maxS){
                maxS = nowS;
                count++;
            }
        }

        return count;
    }
}