#include <stdio.h>
int main(){
    int a, b;
    int sum = 0;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    // Cach 1:
    // for (int i = a; i <= b; i++){
    //     if (i % 2 != 0){
    //         sum += i;
    //     }
    // }
    // printf("Sum = %d",sum);
    // Cach 2: Tot hon
    if (a % 2 != 0){
        a++;
    }
    for (int i = a; i <= b; i += 2){
        sum += i;
    }
    printf("Sum = %d", sum);
}