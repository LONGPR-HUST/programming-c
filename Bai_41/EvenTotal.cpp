#include <stdio.h>

int main(){
    int a[5] = {1, 3, 6, 10, 12};
    int sum = 0;
    for (int i = 0; i < 5; i++){
        if (a[i] % 2 != 0){
            continue;
        }
        sum += a[i];
    }
    printf("Tong chan = %d", sum);
}