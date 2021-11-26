#include <stdio.h>
int main(){
    int a[9] = {1, 2, 6, 8, 111, 44, 444, 223, 4432};
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < 9; i++){
        if (a[i] < min){
            min = a[i];
        }
        if (a[i] > max){
            max = a[i];
        }
    }
    printf("Max = %d, Min = %d", max, min);

}