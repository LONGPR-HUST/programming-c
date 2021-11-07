#include <stdio.h>
int main(){
    int a = 5;
    int b = 10;
    int sum = 0;
    for (int i = a; i <= b; i++){
        sum += i;
    }
    printf("Sum = %d", sum);
}