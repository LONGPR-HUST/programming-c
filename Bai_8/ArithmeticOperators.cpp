#include<stdio.h>
int main(){
    int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    //Phep +
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
    //Phep -
    int sub = a - b;
    printf("%d - %d = %d\n", a, b, sub);
    //Phep *
    int mul = a * b;
    printf("%d * %d = %d\n", a, b, mul);
    //Phep /
    float div = a / (float)b;
    // float div = (float)a / b;
    // float div = a / b * 1.0;
    // float div = (float)(a / b);/'a/b duoc mot so nguyen -> ep kieu float thi duoc them duoi 000000 vao sau
    printf("%d / %d = %f\n", a, b, div);
    //Phep %
    int mod = a % b;
    printf("%d %% %d = %d\n", a, b, mod);
}