#include <stdio.h>
int main(){
    int a;
    printf("Nhap a = "); scanf("%d",&a);
    if (a >= 0){
        printf("%d la so nguyen duong", a);
    }else{
        printf("%d la so nguyen am", a);
    }
}