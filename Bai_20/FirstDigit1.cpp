#include <stdio.h>
int main(){
    //Vong lap for
    int number;
    printf("Nhap number = ");
    scanf("%d", &number);
    int first = number;
    for (; first > 9;){
        first /= 10; // first = first / 10
    }
    printf("Chu so dau tien cua %d la %d", number, first);
    // Hoac
    // for (; first > 9; first /= 10){
    // }
    // printf("Chu so dau tien cua %d la %d", number, first);
}