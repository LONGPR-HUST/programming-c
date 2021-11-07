#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    //Cach 1:
    printf("\n a = %d, b = %d", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("\n a = %d, b = %d", a, b);
    //Cach 2:
    // printf("\n a = %d, b = %d", a, b);
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("\n a = %d, b = %d", a, b);
    //Cach 3:
    // printf("\n a = %d, b = %d", a, b);
    // a = a * b;
    // b = a / b;
    // a = a / b;
    // printf("\n a = %d, b = %d", a, b);
    //Cach 4:
    // printf("\n a = %d, b = %d", a, b);
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // printf("\n a = %d, b = %d", a, b);

}