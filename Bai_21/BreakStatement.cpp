#include <stdio.h>
int main()
{
    int number;
    printf("Nhap number = ");
    scanf("%d", &number);
    bool allEven = true; // Gia su so can tim la dung thi chi can co mot chu so le la sai
    int last;
    while (number > 0)
    {
        last = number % 10; // lay chu so cuoi cung cua number
        if (last % 2 == 1)
        {
            allEven = false;
            break;
        }
        number /= 10; // bo chu so cuoi cua number
    }
    if (allEven)
    {
        printf(" toan chu so chan");
    }
    else
    {
        printf(" co chu so le");
    }
}