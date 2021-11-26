#include <stdio.h>

int main()
{
    int a[9] = {1, 2, 3, 4, 5, 44, 57, 99, 101};
    int tong = 0;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] % 2 != 0)
        {
            tong += a[i];
        }
    }
    printf("Tong le = %d", tong);
}