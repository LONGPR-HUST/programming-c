#include <stdio.h>
int main(){
    int a[9] = {1, 3, 3, 5, 9, 3333, 12, 335, 666};
    int maxIndex = 0;
    int max = a[0];
    for (int i = 1; i < 9; i++){
        if (a[i] > max){
            max = a[i];
            maxIndex = i;
        }
    }
    printf("IndexMax = %d", maxIndex + 1);
}