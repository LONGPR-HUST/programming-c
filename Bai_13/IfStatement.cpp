#include <stdio.h>
int main(){
    int a;
    printf("Nhap a = ");
    scanf("%d",&a);
    if (a % 2 == 0){
        printf("%d la so chan \n", a);
    }
    printf("Xong!");
}