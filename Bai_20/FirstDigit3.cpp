#include <stdio.h>
int main()
{
    // Vong lap do while
    int number;
    printf("Nhap number = ");
    scanf("%d", &number);
    int first = number;
    // do
    // {
    //     if (first > 9)
    //     {
    //         first /= 10; // first = first / 10
    //     }
    // } while (first > 9);
    // printf("Chu so dau tien cua %d la %d", number, first);
    // cach 2:
    do{
        if(first < 10){
            printf("Chu so dau tien cua %d la %d", number, first);
            return 0; // Thoat chuong trinh
        }
        first /= 10;

    }while(true);// Vong lap vo tan
}