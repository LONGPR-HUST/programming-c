#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    if (a > b){
        printf("%d lon hon %d", a, b);
    }else if (a == b)
    {
        printf("%d bang %d", a, b);
    }else{
        printf("%d nho hon %d", a, b);
    }
    
}