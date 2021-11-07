#include <stdio.h>
int main(){
    int number;
    do{
        printf("Nhap number = ");
        scanf("%d", &number);
    }while (number < 1);
    
    printf("Number = %d", number);
}