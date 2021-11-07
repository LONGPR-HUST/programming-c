#include <stdio.h>
int main(){
    float a, b, c;
    printf("\nNhap 3 so a, b, c:");
    scanf("%f%f%f", &a, &b, &c);
    // Cach 1:
    float maxValue = a;
    if (b > maxValue){
        maxValue = b;
        
    }
    if (c > maxValue){
        maxValue = c;
    }
    printf("\n Max = %f", maxValue);
    // Cach 2:
    // if (a >= b && a >= c){
    //     printf("Max = %f", a);
    // } else if (b >= a && b >= c)
    // {
    //    printf("Max = %f", b);
    // }else{
    //     printf("Max = %f", c);
    // }
    
}