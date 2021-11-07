#include <stdio.h>
int main(){
    int a;
    printf("Nhap a = ");
    scanf("%d", &a);
    if (a > 0){
        // So duong
        if (a % 2 == 0){
            printf("Day la so duong chan");
        }else{
            printf("Day la so duong le");
        }
    }else if (a == 0){
        // So 0
        printf("Day la so 0!");
    }else{
        // So am
        if (a % 2 == 0){
            printf("Day la so am chan");
        }else{
            printf("Day la so am le");
        }
    }
}