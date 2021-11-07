#include <stdio.h>
int main(){
    // vong lap while
    int number;
    printf("Nhap number = ");
    scanf("%d", &number);
    int first = number;
    while (first > 9)
    {
        first /= 10; // first = first / 10
    }
    printf("Chu so dau tien cua %d la %d", number, first);
    
}