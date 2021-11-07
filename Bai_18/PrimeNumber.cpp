#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Nhap a = ");
    scanf("%d", &a);
    int i = 2;
    int count = 0;
    for (; i <= sqrt(a); i++){
        if(a % i == 0){
            count++;
            printf("%d chia het cho %d\n", a, i);
        }
    }
    printf("count = %d\n", count);
    if (count == 0){
        printf("%d la so NT!", a);
    }else{
        printf("%d khong la so NT!", a);
    }
}